void* task_create(const char* name, void* handler, int exit, unsigned int storage);
void task_start(void* task);
void task_exit(int code);
void task_yield();
