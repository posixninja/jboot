#include <mmu.h>

void mmu_map_address(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
	arg1 |= 0xC12;
	if(arg3 != 0) {
		arg1 |= 0x8;
	}

	unsigned int r3 = *((unsigned int*)0x4FF2C3E0);
	arg0 >>= 0x14;
	if(arg4 != 0) {
		arg1 |= 0x4;
	}
	arg0 <<= 0x2;

	unsigned int r12 = arg0 + r3;
	arg0 += r3;

	while(arg2 != 0) {
		//switch() {
		//TODO: Finish Implementing
		//}
	}
}

