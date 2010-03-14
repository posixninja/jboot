unsigned int* gHeapEnd;
unsigned int* gHeapStart;

void system_init() {
	*gHeapEnd = 0x4FFF7000;
	*gHeapStart = 0x4FF2E000;
	unsigned int heap_start = *gHeapStart;
	unsigned int heap_size = *gHeapEnd - *gHeapStart;
	//heap_add_chunk(heap_start, heap_size);

	//mmu_init(0);
	//nvram_init();
	//idle_task_init();
	//sub_4FF18A18();
}
