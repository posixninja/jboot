#include <task.h>

TaskDescriptor* task_setup(TaskDescriptor* task, const char* name, void* handler,
		void* arg, void* stack, unsigned int stack_size) {

	int i = 0;
	memset(task, '\0', sizeof(TaskDescriptor));
	task->stack_size = stack_size;
	task->begin = 0x7461736B;
	task->end = 0x74736B32;
	task->stack = stack;
	strncpy(task->name, &name, 0x10);
	task->unk_list.next = &task->unk_list;
	task->unk_list.prev = &task->unk_list;
	task->handler = handler;
	task->arg = arg;
	task->queue_list.next = 0;
	task->queue_list.prev = 0;
	task->state = 0;
	task->irq_disable_count = 1;
	for(i = 0; i < stack_size; i += 4) {
		*(unsigned int*)stack = 0x7374616B;
		stack += 4;
	}

	//MOV     R0, R4
	//task_setup_registers();
	//LDR     R3, =off_4FF29328
	//ADDS    R1, R4, #4
	//MOV     R0, R4
	//LDR     R2, [R3,#4]
	//STR     R3, [R4,#4]
	//STR     R2, [R4,#8]
	//LDR     R2, [R3,#4]
	//STR     R1, [R3,#4]
	//STR     R1, [R2]
	//LDR     R2, =task_stack
	//LDR     R3, [R2]
	//ADDS    R3, #1
	//STR     R3, [R2]
	return 0;
}
