#include<stdio.h>
#include<stdlib.h>

struct Stack{
	int max_size;
	int *data;
	int top;
	int (*pop)(struct Stack*);
	void (*push)(struct Stack*, int);
	void (*clean)(struct Stack*);
};

struct Stack *createStack(int size);