#include <arm.h>
#include <fpu.h>
#include <mmu.h>

int arm_init() {
	arm_invalidate_data_cache();
	arm_invalidate_instruction_cache();

	unsigned int aux = arm_read_auxiliary_control();
	unsigned int wfi = board_use_wfi();

	if(wfi) aux |= 0x100;
	else aux &= ~0x100;
	aux &= ~2;
	arm_write_auxiliary_control(aux);
	unsigned int ctrl = arm_read_control();

	mmu_init();
	arm_enable_level1_cache();

	ctrl |= 0x1805;
	ctrl &= ~2;
	ctrl |= 0x400000;

	arm_write_control(ctrl);
	arm_set_access_control();
	fpu_init();
	return 0;
}
