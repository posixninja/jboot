SECTIONS {
	. = 0x4FF00000;
	_begin = .;
	
	.entry : {
		entry.o (.text .data);
	}
	
	. = 0x4FF00200;
	.text : {
		* (.text);
	}
	
	.rodata : {
		* (.rodata);
	}
	
	.data : {
		* (.data);
	}

	_bss_start = .;
	.bss : {
		* (.bss);
	}
	
	_bss_end = .;
	_bss_size = _bss_end - _bss_start;
	_code_size = _bss_start - _begin;
	
	_end = .;
}