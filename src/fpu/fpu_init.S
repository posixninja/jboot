.global fpu_init

.code 32
fpu_init:
	fmrx    r2, fpexc
	orr     r2, r2, #0x40000000
	fmxr    fpexc, r2
	bx      lr
