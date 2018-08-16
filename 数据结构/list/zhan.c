#include <stdio.h>
#define MAXSIZE 10

typedef struct Snode *stack;
struct Snode{
	int data[MAXSIZE];
	int top;
}

void push(stack PtrS, int number)
{
	if (PtrS->top == MAXSIZE - 1) {
		printf("堆栈已满\n");
	} else {
		PtrS->data[++(PtrS->top)] = number;
	}
}

int pop(stack PtrS)
{
	if (PtrS->top >= 0) {
		int number = PtrS->data[(PtrS->top)--];
		return number;
	} else {
		printf("堆栈为空\n");
		return -1;
	}
}