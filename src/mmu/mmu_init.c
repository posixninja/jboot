#include <mmu.h>

void mmu_init() {
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
	//BL      mmu_map_address
	//MOV.W   R0, #0x40000000
	//MOV     R1, R0
	//MOV     R3, R5
	//MOV.W   R2, #0x100
	//STR     R5, [SP,#0x18+var_18]
	//STR     R4, [SP,#0x18+var_14]
	//BL      mmu_map_address
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
	//BL      mmu_map_address
	//MOV.W   R0, #0xC0000000
	//MOV.W   R1, #0x40000000
	//MOV.W   R2, #0x400
	//MOV     R3, R4
	//STR     R4, [SP,#0x18+var_18]
	//STR     R4, [SP,#0x18+var_14]
	//BL      mmu_map_address
	//MOV     R0, R4
	//SUB.W   SP, R7, #8
	//POP     {R4,R5,R7,PC}
}

