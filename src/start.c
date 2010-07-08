#include <arm.h>
#include <task.h>
#include <system.h>
#include <subsystem.h>

void main_task();

int start() {
	//printf("\niBoot start\n");
	arm_init();
	system_init();
	subsystem_init();

	void* main = task_create("main", &main_task, 0, 0x1C00);
	task_start(main);
	task_exit(0);
	return 0;
}

void main_task(void* arg) {

}
