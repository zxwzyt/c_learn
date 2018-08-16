#include <stdio.h>

typedef struct Snode *stack;

struct Snode{
	int data;
	struct Snode *next;
};

stack createStack()
{
	stack s = (stack)malloc(sizeof(struct Snode));
	s->next = NULL;
	return s;
}

int isEmpty(stack s)
{
	return (s->next == NULL);
}

void push(stack s, int number)
{
	struct Snode *tempcell;
	tempcell = (Snode *)malloc(sizeof(struct Snode));
	tempcell->data = number;
	tempcell->next = s->next;
	s->next = tempcell;
}

int pop(stack s)
{
	struct Snode * firstcell;
	if (isEmpty(s))
	{
		printf("堆栈为空");
	} else {
		firstcell = s->next;
		int number = firstcell->data;
		s->next = firstcell->next;
		free(firstcell);
		return number;
	}
}