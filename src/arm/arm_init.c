#include <arm.h>
#include <fpu.h>

void sub_4FF19C30(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
	arg1 |= 0xC12;
	if(arg3 != 0) {
		arg1 |= 0x8;
	}

	unsigned int r3 = *((unsigned int*)0x4FF2C3E0);
	arg0 >>= 0x14;
	if(arg4 != 0) {
		arg1 |= 0x4;
	}
	arg0 <<= 0x2;

	unsigned int r12 = arg0 + r3;
	arg0 += r3;

	while(arg2 != 0) {
		//switch() {
		//TODO: Finish Implementing
		//}
	}
}

void sub_4FF17B90() {
	// TODO: Implement Me
	//PUSH    {R4,R5,R7,LR}
	//ADD     R7, SP, #8
	//SUB     SP, SP, #8
	//BLX     sub_4FF00438
	//MOVS    R5, #1
	//MOVS    R4, #0
	//ORR.W   R0, R0, #0x2000000
	//BLX     sub_4FF00440
	//MOV.W   R0, #0x84000000
	//MOV     R1, R0
	//MOVS    R2, #8
	//MOV     R3, R5
	//STR     R5, [SP,#0x18+var_18]
	//STR     R4, [SP,#0x18+var_14]
	//BL      sub_4FF19C30
	//MOV.W   R0, #0x40000000
	//MOV     R1, R0
	//MOV     R3, R5
	//MOV.W   R2, #0x100
	//STR     R5, [SP,#0x18+var_18]
	//STR     R4, [SP,#0x18+var_14]
	//BL      sub_4FF19C30
	//MOV     R0, R4
	//MOV     R2, R5
	//MOV     R3, R5
	//LDR     R1, =loc_4FF00000
	//BL      sub_4FF19D8C
	//MOVS    R2, #8
	//MOV     R3, R4
	//LDR     R0, =0x84800000
	//MOV.W   R1, #0x84000000
	//STR     R4, [SP,#0x18+var_18]
	//STR     R4, [SP,#0x18+var_14]
	//BL      sub_4FF19C30
	//MOV.W   R0, #0xC0000000
	//MOV.W   R1, #0x40000000
	//MOV.W   R2, #0x400
	//MOV     R3, R4
	//STR     R4, [SP,#0x18+var_18]
	//STR     R4, [SP,#0x18+var_14]
	//BL      sub_4FF19C30
	//MOV     R0, R4
	//SUB.W   SP, R7, #8
	//POP     {R4,R5,R7,PC}
}

void sub_4FF19D4C() {
	*((unsigned int*)0x4FF2C3E0) = (unsigned int)0x4FFF8000;
	sub_4FF19C30(0, 0, 0x1000, 0, 0, 0);
	sub_4FF17B90();
	arm_set_domain_access_control(3);
	arm_set_translation_table_base(*((void**)0x4FF2C3E0));
	arm_invalidate_tlb();
}

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

	sub_4FF19D4C();
	arm_enable_level1_cache();

	ctrl |= 0x1805;
	ctrl &= ~2;
	ctrl |= 0x400000;

	arm_write_control(ctrl);
	arm_set_access_control();
	fpu_init();
	return 0;
}
