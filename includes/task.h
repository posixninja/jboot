void* task_create(const char* name, void* handler, int exit, unsigned int stack_size);
void* task_setup(void* task, const char* name, void* handler, int exit, void* stack, unsigned int stack_size);
void task_start(void* task);
void task_exit(int code);
void task_yield();
