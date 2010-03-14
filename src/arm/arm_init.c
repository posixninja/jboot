#include <arm.h>

int arm_init() {
	arm_invalidate_data_cache();
	arm_invalidate_instruction_cache();

	unsigned int auxreg = arm_read_auxiliary_control();
	// BL      sub_4FF17B5C

	if(1) {
		auxreg |= 0x100;
	} else {
		auxreg &= ~0x100;
	}
	auxreg &= ~2;

	arm_write_auxiliary_control(auxreg);
	// BLX     sub_4FF003E0
	// MOV     R4, R0
	// BL      sub_4FF19D4C
	// BLX     sub_4FF19BF0
	// MOVW    R3, #0x1805
	// ORR.W   R0, R4, R3
	// BIC.W   R0, R0, #2
	// ORR.W   R0, R0, #0x400000
	// BLX     sub_4FF003E8
	arm_write_access_control();
	fpu_init();
	return 0;
}
