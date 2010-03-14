.global arm_set_domain_access_control

arm_set_domain_access_control:
	mcr     p15, 0, r0, c3, c0, 0
	bx      lr
