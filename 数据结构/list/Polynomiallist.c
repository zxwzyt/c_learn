#include <stdio.h>

typedef struct Node * PtrToNode;
struct Node {
	int Coeficient;
	int Exponent;
	PtrToNode Next;
}

typedef PtrToNode Polynomial;

