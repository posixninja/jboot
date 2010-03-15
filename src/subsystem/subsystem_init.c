
int subsystem_init() {
	//PUSH    {R4-R7,LR}
	//ADD     R7, SP, #0xC
	//PUSH.W  {R8,R10,R11}
	//SUB     SP, SP, #0x10
	//LDR     R5, =0xBF100158
	//BL      sub_4FF187D0
	//LDR     R3, [R5]
	//ANDS.W  R4, R3, #1
	//BNE.W   loc_4FF17F26

	if(1) {
		//MOV     R1, R4
		//MOVW    R0, #0x107
		//BL      sub_4FF01C54
		//MOV     R1, R4
		//MOV.W   R0, #0x106
		//BL      sub_4FF01C54
		//MOV     R1, R4
		//MOVW    R0, #0x105
		//BL      sub_4FF01C54
		//MOV     R1, R4
		//MOV.W   R0, #0x104
		//BL      sub_4FF01C54
		//MOV     R1, R4
		//MOVW    R0, #0x103
		//BL      sub_4FF01C54
		//MOV     R1, R4
		//MOV.W   R0, #0x102
		//BL      sub_4FF01C54
		//MOV     R1, R4
		//MOVW    R0, #0x101
		//BL      sub_4FF01C54
		//MOV     R1, R4
		//MOV.W   R0, #0x100
		//BL      sub_4FF01C54
		//MOVS    R0, #0x32 ; '2'
		//BL      sub_4FF1833C
		//BL      sub_4FF18184
		//STR     R0, [SP,#0x30+var_30]
		//MOV.W   R0, #0x104
		//BL      gpio_get_state
		//STR     R0, [SP,#0x30+var_24]
		//MOVW    R0, #0x105
		//BL      gpio_get_state
		//STR     R0, [SP,#0x30+var_28]
		//MOV.W   R0, #0x106
		//BL      gpio_get_state
		//STR     R0, [SP,#0x30+var_2C]
		//MOVW    R0, #0x107
		//BL      gpio_get_state
		//MOV     R11, R0
		//MOV.W   R0, #0x100
		//BL      gpio_get_state
		//MOV     R10, R0
		//MOVW    R0, #0x101
		//BL      gpio_get_state
		//MOV     R6, R0
		//MOV.W   R0, #0x102
		//BL      gpio_get_state
		//MOV     R8, R0
		//MOVW    R0, #0x103
		//BL      gpio_get_state
		//MOVS    R1, #4
		//MOV     R4, R0
		//MOVW    R0, #0x107
		//BL      sub_4FF01C54
		//MOVS    R1, #4
		//MOV.W   R0, #0x106
		//BL      sub_4FF01C54
		//MOVS    R1, #4
		//MOVW    R0, #0x105
		//BL      sub_4FF01C54
		//MOVS    R1, #4
		//MOV.W   R0, #0x104
		//BL      sub_4FF01C54
		//MOVS    R1, #4
		//MOVW    R0, #0x103
		//BL      sub_4FF01C54
		//MOVS    R1, #4
		//MOV.W   R0, #0x102
		//BL      sub_4FF01C54
		//MOVW    R0, #0x101
		//MOVS    R1, #4
		//BL      sub_4FF01C54
		//MOVS    R1, #4
		//MOV.W   R0, #0x100
		//BL      sub_4FF01C54
		//LSLS    R0, R6, #2
		//ORR.W   R0, R0, R10,LSL#3
		//ORRS    R0, R4
		//LDR     R1, [SP,#0x30+var_28]
		//ORR.W   R0, R0, R8,LSL#1
		//LDR     R2, [R5]
		//LSLS    R0, R0, #8
		//ORR.W   R3, R0, #1
		//LSLS    R0, R1, #2
		//LDR     R1, [SP,#0x30+var_24]
		//ORR.W   R0, R0, R1,LSL#3
		//LDR     R1, [SP,#0x30+var_2C]
		//ORR.W   R0, R0, R11
		//ORR.W   R0, R0, R1,LSL#1
		//LDR     R1, [SP,#0x30+var_30]
		//ORR.W   R0, R0, R1,LSL#4
		//ORR.W   R0, R3, R0,LSL#16
		//BIC.W   R3, R0, #0xFF000000
		//AND.W   R0, R2, #0xFF000000
		//ORR.W   R0, R3, R0
		//STR     R0, [R5]
	}

	//BL      miu_init
	//BL      clock_init
	//BL      vic_init
	//MOVS    R0, #0
	//BL      timer_init
	//BL      usb_otg_init
	//LDR     R4, =unk_4FF2BDE4
	//BL      uart_set_flow_control
	//BL      gpio_init
	//MOVS    R0, #0x20 ; ' '
	//BL      sub_4FF009AC
	//MOV     R1, R4
	//MOVS    R0, #1
	//BL      sub_4FF0507C
	//LDRB    R0, [R4]
	//BL      uart_set_status
	//BL      cdma_init
	//BL      sub_4FF11550
	//BL      sub_4FF19724
	return 0;
}
