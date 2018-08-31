#include <stdio.h>

typedef struct QueueRecord *Queue;

int IsEmpty(Queue Q);
int IsFull(Queue Q);
Queue CreateQueue(int MaxElements);
void DisposeSQueue(Queue Q);
void MakeEmpty(Queue Q);
void Enqueue(ElementType X, Queue Q);
ElementType Front(Queue Q);
void Dequeue(Queue Q);
ElementType TopAndDequeue(Queue Q);

#define MinQueueSize (5)

struct QueueRecord
{
	int Capacity;
	int Front;
	int Rear;
	int Size;
	ElementType *Array;
}

int IsEmpty(Queue Q)
{
	return Q->size == 0;
}

void MakeEmpty(Queue Q)
{
	Q->size = 0;
	Q->Rear = 0;
	Q->Front = 0;
}

static int Succ(int Value, Queue Q)
{
	if (++Value == Q->Capacity)
	{
		Value = 0;
	}

	return Value;
}

void Enqueue(ElementType X, Queue Q)
{
	if (IsFull(Q))
		Error("full Queue");
	else
	{
		Q->Size++;
		Q->Rear = Succ(Q->Rear, Q);
		Q->Array[Q->Rear] = X;
	}
}

int IsFull(Queue Q)
{
	return Q->Size == Q->Capacity;
}
