
#include "Stack.h"

void clean(struct Stack *this){
	free(this->data);
	free(this);
}

int pop(struct Stack *this){
	if(this->top == -1){
		printf("Empty array\n");
		return -1;
	}
	int temp = this->data[this->top];
	printf("Popping the value %d at top = %d\n",temp, this->top);
	this->top -= 1;
	return temp;
}

void push(struct Stack *this, int val){
	if(this->top == this->max_size - 1){
		printf("Stack is full \n");
		return;
	}
	this->top += 1;
	this->data[this->top] = val;
	printf("Pushing the value %d at top = %d\n",this->data[this->top], this->top);
}

struct Stack *createStack(int size){
	struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->max_size = size;
	stack->top = -1;
	stack->data = (int*)malloc(sizeof(int) * size);
	stack->pop = &pop;
	stack->push = &push;
	stack->clean = &clean;
	return stack;
}