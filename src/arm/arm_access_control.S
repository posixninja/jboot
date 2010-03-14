.global arm_write_access_control

.code 32
arm_write_access_control:
	mrc     p15, 0, r0, c1, c0, 2
	mov     r1, #0xF
	orr     r0, r0, r1, LSL#20
	mcr     p15, 0, r0, c1, c0, 2
	bx      lr
