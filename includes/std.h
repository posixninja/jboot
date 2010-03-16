#ifndef STD_H
#define STD_H

#define NULL 0

typedef enum {
	FALSE = 0,
	TRUE = 1
} Boolean;

typedef enum {
	OFF = 0,
	ON = 1
} Switch;

typedef struct {
	void* prev;
	void* next;
} LinkedList;

int printf(const char* fmt, ...);
void* zalloc(unsigned int size, unsigned int area);
void panic(const char* func, const char* msg, ...);
int memset(void* dst, char val, unsigned int size);
int strncpy(void* dst, void* src, unsigned int size);

#endif
