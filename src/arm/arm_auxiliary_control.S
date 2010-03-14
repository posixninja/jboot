.global arm_read_auxiliary_control
.global arm_write_auxiliary_control
.global arm_enable_level1_cache

.code 32
arm_read_auxiliary_control:
	mrc     p15, 0, r0, c1, c0, 1
	bx      lr

arm_write_auxiliary_control:
	mcr     p15, 0, r0, c1, c0, 1
	bx      lr

arm_enable_level1_cache:
	mrc     p15, 0, r0, c1, c0, 1
	orr     r0, r0, #8
	mcr     p15, 0, r0, c1, c0, 1
	bx      lr
