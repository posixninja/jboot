#ifndef HEAP_H
#define HEAP_H

typedef struct chunk_header {
	int prev_size;
	int size;
	struct chunk_header* next;
	struct chunk_header** head;
} chunk_header_t;

typedef struct heap_chunk {
	void* address;
	unsigned int size;
} heap_chunk_t;

extern unsigned int gHeapRemaining;
extern unsigned int gHeapChunkCount;
extern heap_chunk_t gHeapChunkList[3];
extern chunk_header_t* gHeapHeader[32];

void free(void* ptr);
void* malloc(uint32_t size);
void heap_add_chunk(void* address, unsigned int size);

unsigned int get_zone(unsigned int size);
unsigned int get_min_alloc(unsigned int size);
chunk_header_t* get_next_chunk(chunk_header_t* chunk);
chunk_header_t* get_prev_chunk(chunk_header_t* chunk);
void link_chunk(chunk_header_t* chunk, unsigned int size);

#endif
