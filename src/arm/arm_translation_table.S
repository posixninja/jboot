.global arm_set_translation_table_base

arm_set_translation_table_base:
	mcr     p15, 0, r0, c2, c0, 0
	bx      lr
