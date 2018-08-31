#include <stdio.h>
#include <stdlib.h>
#include <list.h>

struct Node {
	ElementType Element;
	Position Next;
}

int IsEmpty(List L)
{
	return L->next == NULL;
}

int IsLast(Position P, List L)
{
	return P->next == NULL;
}

Position Find(ElementType X, List L)
{
	Position P;
	P = L->next;
	while (P != NULL && P->Element != X)
		P = P->next;

	return P;
}

Position FindPrevious(ElementType X, List L)
{
	Position P;
	P = L;

	while (P->next != NULL && P->next->Element != X)
		P = P->next;

	return P;
}

/**
 * 这样写并不完全准确，当L是空白时会有问题
 * @param X [description]
 * @param L [description]
 */
void Delete(ElementType X, List L)
{
	Position P, TempCell;
	P = FindPrevious(ElementType X, List L);

	if (!IsLast(ElementType P, List L))
	{
		TempCell = P->next;
		P->next = TempCell->next;
		free(TempCell);
	}
}

void Insert(ElementType X, List L, Position P)
{
	Position TempCell;
	TempCell = (Position)malloc(sizeof(struct Node));
	if (TempCell == NULL)
		printf("out of space! \n");

	TempCell->element = X;
	TempCell->next = P->next;
	P->next = TempCell;
}



