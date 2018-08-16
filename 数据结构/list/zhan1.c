#include <stdio.h>
#define MAXSIZE

typedef DSnode * dstack;

struct DSnode {
	int data[MAXSIZE];
	int top1;
	int top2;
};

void push(dstack ptrs, int number, int tag)
{
	if (ptrs->top2 - ptrs->top1 = 1)
	{
		printf("堆栈已满\n");
	}

	if (tag == 1)
	{
		ptrs->data[++(ptrs->top1)] = number;
	} else {
		ptrs->data[--(ptrs->top2)] = number;
	}
}


