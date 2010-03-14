.global fpu_shutdown

.code 32
fpu_shutdown:
	fmrx    r2, fpexc
	bic     r2, r2, #0x40000000
	fmxr    fpexc, r2
	bx      lr
