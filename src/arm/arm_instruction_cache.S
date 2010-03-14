.global arm_invalidate_instruction_cache

.code 32
arm_invalidate_instruction_cache:
    mov     r0, #0
    mcr     p15, 0, r0, c7, c5, 0
    nop
    nop
    nop
    nop
    bx      lr
