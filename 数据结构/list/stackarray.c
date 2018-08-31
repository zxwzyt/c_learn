#include <stdio.h>

typedef struct StackRecord *Stack;

int IsEmpty(Stack S);
int IsFull(Stack S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X, Stack S);
ElementType Top(Stack S);
void Pop(Stack S);
ElementType TopAndPop(Stack S);

#define EmptyTOS (-1)
#define MinStackSize (5)

struct StackRecord
{
	int Capacity;
	int TopStack;
	ElementType * Array;
}

Stack CreateStack(int MaxElements);
{
	Stack S;

	if (MaxElements < MinStackSize)
		Error("Stack size is too small");

	S = malloc(sizeof(struct StackRecord));
	if (S == NULL)
		FatalError("Out of space");
	S->array = malloc(sizeof(ElementType) * MaxElements);
	if (S->array == NULL)
		FatalError("Out of space");
	S->Capacity = MaxElements;
	MakeEmpty(S);

	return S;
}

void DisposeStack(Stack S);
{
	if (S != NULL)
	{
		free(S->Array);
		free(S);
	}
}

int IsEmpty(Stack S);
{
	return S->TopStack == EmptyTOS;
}

void MakeEmpty(Stack S);
{
	S->TopStack = EmptyTOS;
}

void Push(ElementType X, Stack S);
{
	if (!IsFull(S))
		Error("full Stack");
	else
		S->Array[++S->TopStack] = X;
}

ElementType Top(Stack S);
{
	if (!IsEmpty(S))
		return S->Array[S->TopStack];
	Error("Empty Stack");
	return 0;
}

void Pop(Stack S);
{
	if (IsEmpty(S))
		Error("Empty Stack");
	else
		S->TopStack--;
}

ElementType TopAndPop(Stack S)
{
	if (!IsEmpty(S))
		return S->Array[S->TopStack--];
	Error("Empty Stack");
	return 0;
}
