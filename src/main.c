#include <arm.h>
#include <system.h>

int main() {
	//printf("\niBoot start\n");
	arm_init();
	system_init();
	return 0;
}
