#include <task.h>

void* task_setup(void* task, const char* name, void* handler,
		int exit, void* stack, unsigned int stack_size) {

	//MOV     R5, R1
	//MOV     R6, R2
	//MOVS    R1, #0          ; c
	//MOVS    R2, #sizeof(TaskDescriptor) ; n
	//MOV     R4, R0
	//MOV     R8, R3
	//LDR.W   R10, [SP,#0x1C+arg_4]
	//BLX     memset
	//LDR     R3, =0x7461736B ; task
	//MOVS    R2, #0x10
	//STR.W   R10, [R4,#TaskDescriptor.storageSize]
	//STR     R3, [R4,#TaskDescriptor]
	//LDR     R3, =0x74736B32 ; tsk2
	//ADD.W   R0, R4, #TaskDescriptor.taskName
	//MOV     R1, R5
	//STR.W   R3, [R4,#TaskDescriptor.identifier2]
	//LDR     R3, [SP,#0x1C+arg_0]
	//STR     R3, [R4,#TaskDescriptor.storage]
	//BL      strncpy         ; size
	//MOVS    R2, #0
	//ADD.W   R3, R4, #TaskDescriptor.linked_list_3
	//MOV.W   R0, R10,LSR#2
	//STR     R3, [R4,#TaskDescriptor.linked_list_3.next]
	//STR     R3, [R4,#TaskDescriptor.linked_list_3]
	//MOVS    R3, #1
	//STR     R6, [R4,#TaskDescriptor.taskRoutine]
	//STR.W   R8, [R4,#TaskDescriptor.unknown_passed_value]
	//STR     R2, [R4,#TaskDescriptor.runqueueList.prev.next]
	//STR     R2, [R4,#TaskDescriptor.runqueueList.prev]
	//STR     R2, [R4,#TaskDescriptor.state]
	//STR     R3, [R4,#TaskDescriptor.criticalSectionNestCount]
	//B       loc_4FF18FD8
	while(0
		  //CMP     R2, R0
		  //BCC     loc_4FF18FCE
		 )
	{
		//LDR     R1, [R4,#TaskDescriptor.storage]
		//LDR     R3, =0x7374616B ; stak
		//STR.W   R3, [R1,R2,LSL#2]
		//ADDS    R2, #1
	}

	//MOV     R0, R4
	//BL      setup_task_registers
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
}
