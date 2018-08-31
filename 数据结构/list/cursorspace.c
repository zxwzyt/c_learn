#include <stdio.h>
#define SpaceSize 100;

typedef int PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

struct Node
{
	ElementType Element;
	Position Next;
}

struct Node CursorSpace[SpaceSize];

static Position CursorAlloc(void)
{
	Position P;
	P = CursorSpace[0].Next;
	CursorSpace[0].Next = CursorSpace[P].Next;

	return P;
}

static void CursorFree(Position P)
{
	CursorSpace[P].Next = CursorSpace[0].Next;
	CursorSpace[0].Next = P;
}

int IsEmpty(List L)
{
	return CursorSpace[L].Next == 0;
}

int IsLast(Position P, List L)
{
	return CursorSpace[P].Next == 0;
}

Position Find(ElementType X, List L)
{
	Position P;

	P = CursorSpace[L].Next;
	while (P && CursorSpace[P].element != X) 
		P = CursorSpace[P].Next;

	return P;
}

void Delete(ElementType X, List)
{
	Position P, Tempcell;

	P = FindPrevious(X, L);
	if (!IsLast(P, L))
	{
		Tempcell = CursorSpace[P].Next;
		CursorSpace[P].Next = CursorSpace[Tempcell].Next;
		CursorFree(Tempcell);
	}
}

void Insert(ElementType X, List L, Position P)
{
	Position Tempcell;
	Tempcell = CursorAlloc();

	if (Tempcell == 0)
		FatalError("out of space");

	CursorSpace[Tempcell].Element = X;
	CursorSpace[Tempcell].Next = CursorSpace[P].Next;
	CursorSpace[P].Next = Tempcell;
}








