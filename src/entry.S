.global _start

.text
.code 32

_start:
	b       arm_reset
	ldr     pc, arm_undefined_vector
	ldr     pc, arm_software_vector
	ldr     pc, arm_prefetch_vector
	ldr     pc, arm_data_abort_vector
	ldr     pc, arm_reserved_vector
	ldr     pc, arm_irq_vector
	ldr     pc, arm_fiq_vector

arm_reset_vector:                 .word arm_reset
arm_undefined_vector:             .word arm_spin
arm_software_vector:              .word arm_spin
arm_prefetch_vector:              .word arm_spin
arm_data_abort_vector:            .word arm_spin
arm_reserved_vector:              .word arm_spin
arm_irq_vector:                   .word arm_spin
arm_fiq_vector:                   .word arm_spin

arm_reset:
	adr     r0, _start
	ldr     r1, =_begin
	cmp     r0, r1
	cmp     r0, r1
	beq     arm_setup_exceptions
	ldr     r1, =_begin
	ldr     r2, =_code_size

arm_relocate_code:
	ldr     r3, [r0],#4
	subs    r2, r2, #4
	str     r3, [r1],#4
	bne     arm_relocate_code
	ldr     r1, =_start
	bx      r1

arm_setup_exceptions:
	mrs     r0, cpsr
	bic     r0, r0, #0x1F

	orr     r1, r0, #0x12
	msr     cpsr_c, r1
	ldr     sp, =0x4FFF7800

	orr     r1, r0, #0x11
	msr     cpsr_c, r1
	ldr     sp, =0x4FFF7400

	orr     r1, r0, #0x17
	msr     cpsr_c, r1
	ldr     sp, =0x4FFF7800

	orr     r1, r0, #0x1b
	msr     cpsr_c, r1
	ldr     sp, =0x4FFF7800

	orr     r1, r0, #0x13
	msr     cpsr_c, r1
	ldr     sp, =0x4FFF8000

	ldr     r0, =_bss_end
	ldr     r1, =_bss_start
	mov     r2, #0

arm_clear_bss:
	cmp     r0, r1
	strlt   r2, [r0],#4
	blt     arm_clear_bss

	ldr     r0, =(start+1)
	mov	    lr, pc
	blx	    r0

arm_spin:
	b       arm_spin

