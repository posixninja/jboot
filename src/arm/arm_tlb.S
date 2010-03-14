.global arm_invalidate_tlb

arm_invalidate_tlb:
	mov     r0, #0
	mcr     p15, 0, r0, c8, c7
	bx      lr
