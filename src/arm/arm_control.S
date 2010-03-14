.global arm_read_control
.global arm_write_control

.code 32
arm_read_control:
	mrc		p15, 0, r0, c1, c0, 0
	bx		lr

arm_write_control:
	mcr		p15, 0, r0, c1, c0, 0
	bx		lr
