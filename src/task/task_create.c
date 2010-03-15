#include <std.h>
#include <task.h>

void* task_create(const char* name, void* handler, int exit, unsigned int stack_size) {
	if(stack_size < 0x200) stack_size = 0x200;
	void* task = zalloc(0x94, 0);
	void* stack = zalloc(stack_size, 0);
	if(task == 0 || stack == 0) {
		//panic("task_create", "task allocation failed for '%s'", name);
	}

	task_setup(task, name, handler, exit, stack, stack_size);
	return task;
}
