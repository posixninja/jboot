#ifndef TASK_H
#define TASK_H

#include "std.h"

struct TaskRegisterState {
	unsigned int r4;
	unsigned int r5;
	unsigned int r6;
	unsigned int r7;
	unsigned int r8;
	unsigned int r9;
	unsigned int r10;
	unsigned int r11;
	unsigned int sp;
	unsigned int lr;
};

enum TaskState {
	TASK_READY = 1,
	TASK_RUNNING = 2,
	TASK_SLEEPING = 4,
	TASK_STOPPED = 5
};

struct Event {
	LinkedList list;
	unsigned long long deadline;
	unsigned long long interval;
	void* handler;
	void* opaque;
};

typedef struct {
	unsigned int begin;
	LinkedList task_list;
	LinkedList queue_list;
	enum TaskState state;
	unsigned int irq_disable_count;
	struct TaskRegisterState registers;
	struct Event event;
	LinkedList unk_list;
	unsigned int exit_state;
	void* handler;
	void* arg;
	void* stack;
	unsigned int stack_size;
	char name[0x10];
	unsigned int end;
} TaskDescriptor;

extern TaskDescriptor** gTaskRunning;
extern unsigned int* gResetVector;
extern unsigned int* gTaskCount;
extern LinkedList* gTaskQueue;
extern LinkedList* gTaskList;

TaskDescriptor* task_create(const char* name, void* handler, void* arg, unsigned int stack_size);
TaskDescriptor* task_setup(TaskDescriptor* task, const char* name, void* handler, void* arg, void* stack, unsigned int stack_size);
void task_start(TaskDescriptor* task);
void task_exit(int code);
void task_yield();

#endif
