#include <mmu.h>

void arm_map_memory() {
	*((unsigned int*)0x4FF2C3E0) = (unsigned int)0x4FFF8000;
	mmu_map_address(0, 0, 0x1000, 0, 0, 0);
	mmu_setup();
	arm_set_domain_access_control(3);
	arm_set_translation_table_base(*((void**)0x4FF2C3E0));
	arm_invalidate_tlb();
}

