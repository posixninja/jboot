#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "heap.h"

uint32_t gHeapRemaining;
uint32_t gHeapChunkCount;
heap_chunk_t gHeapChunkList[3];
chunk_header_t* gHeapHeader[32];

void _heap_add_chunk(void* address, uint32_t size) {
	chunk_header_t* chunk;
	chunk_header_t* last_chunk;
	chunk_header_t* first_chunk;

	if(gHeapChunkCount > 3) {
		panic("Too many chunks\n");
	}
	memset(address, '\0', size);

	gHeapChunkList[gHeapChunkCount].address = address;
	gHeapChunkList[gHeapChunkCount].size = size;
	gHeapChunkCount++;

	chunk = address;
	chunk->prev_size &= 0xFCu;
	chunk->prev_size &= 3u;
	chunk->size = 1;

	first_chunk = _get_next_chunk(chunk);
	first_chunk->prev_size &= 0xFCu;
	first_chunk->prev_size = (first_chunk->prev_size & 7) | 4;
	first_chunk->size = (size / 8) - 2;

	last_chunk = _get_next_chunk(first_chunk);
	last_chunk->prev_size &= 0xFCu;
	last_chunk->prev_size = (last_chunk->prev_size & 3) | (4 * first_chunk->size);
	last_chunk->size = 1;

	_free((void*) first_chunk + 8);
}

uint32_t _get_zone(uint32_t size) {
	return (uint32_t) log(size/8);
}

uint32_t _get_min_alloc(uint32_t size) {
	uint32_t result = (size + 15) & 0xFFFFFFF8;
	if(result <= 0xF) {
		result = 16;
	}
	return result;
}

chunk_header_t* _get_next_chunk(chunk_header_t* chunk) {
	return (void*) chunk + (8 * chunk->size);
}

chunk_header_t* _get_prev_chunk(chunk_header_t* chunk) {
	return (void*) chunk - (8 * (chunk->prev_size >> 2));
}
