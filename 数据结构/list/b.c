#include <stdio.h>
#define MAXSIZE 10

typedef struct LNode *List;

struct LNode {
	int Data[MAXSIZE];
	int last;
}

List MakeEmpty()
{
	List Ptrl;
	Ptrl = (List)malloc(sizeof(LNode));
	Ptrl->last = -1;
}

int Find(int number, List Ptrl)
{
	for (int i = 0; i < Ptrl->last+1; ++i)
	{
		if (Ptrl->Data[i] == number)
		{
			return i
		}
	}

	if (i > Ptrl->last)
	{
		return -1;
	}
}

/**
 * 删除第i个元素
 * @param number [description]
 * @param Ptrl   [description]
 */
void delete(int i, List Ptrl)
{
	if (i < 1 || i > Ptrl->last+1)
	{
		printf("不存在\n");
		return;
	}

	for (int j = i; j <= Ptrl->last; ++j)
	{
		Ptrl->Data[j-1] = Ptrl->Data[j];
	}

	Ptrl->last--;
	return;
}

int main(int argc, char const *argv[])
{
	
	return 0;
}