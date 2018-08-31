#include <stadio.h>

typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

int IsEmpty(Stack S);
Stack CreateStack(void);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X, Stack S);
ElementType Top(Stack S);
void Pop(Stack S);

struct Node {
	ElementType Element;
	PtrToNode Next;
}

int IsEmpty(Stack S)
{
	return S->Next == NULL;
}

Stack CreateStack(void)
{
	Stack S;
	S = malloc(sizeof(struct Node));

	if (S == NULL)
		FatalError("out of space");
	S->Next = NULL;
	MakeEmpty(S);

	return S;
}

void MakeEmpty(Stack S)
{
	if (S == NULL)
		Error("must use CreateStack first");
	else
		while(!IsEmpty(S))
			Pop(S);
}

void Push(ElementType X, Stack S)
{
	PtrToNode P;

	P = malloc(sizeof(struct Node));
	if (P == NULL)
		FatalError("OUT OF SPACE !");
	else
	{
		P->Element = X;
		P->Next = S->Next;
		S->Next = P;
	}
}

ElementType Top(Stack S)
{
	if (!IsEmpty(S))
		return S->Next->Element;
	Error("Empty stack");
	return 0;
}

void Pop(Stack S)
{
	PtrToNode FirstCell;

	if (IsEmpty)
		Error("Empty stack");
	else
	{
		FirstCell = S->Next;
		S->Next = FirstCell->Next;
		free(FirstCell); 
	}
}










