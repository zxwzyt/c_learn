#include <stdio.h>
#include<stdlib.h>

typedef struct _node {
	int value;
	struct _node *next;
} Node;

//用自己定义的数据结构代表整个链表
typedef struct _list {
	Node* head;
	// Node* tail;
} List;

void add(List* plist, int);
void print(List * plist);
void find(List *plist, int);

int main()
{
	List list;
	list.head = NULL;
	int number;
	do {
		scanf("%d", &number);
		if (number != -1)
		{
			add(&list, number);
			
		}
	} while (number != -1);

	print(&list);

	scanf("%d", &number);
	find(&list, number);
	
	return 0;
}

void add(List* plist, int number)
{
	Node* p = (Node *)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;

	Node* last = plist->head;
	if (last != NULL)
	{
		while (last->next) {
			last = last->next;
		}

		last->next = p;

	} else {
		plist->head = p;
	}
}

void print(List * plist)
{
	Node *p;
	for (p = plist->head; p; p = p->next)
	{
		printf("%d\n", p->value);
	}
}

void find(List *plist, int number)
{
	Node *p;
	int isFound = 0;
	for (p = plist->head; p; p = p->next)
	{
		if (p->value == number)
		{
			printf("找到了\n");
			isFound = 1;
			break;
		}
	}

	if (!isFound)
	{
		printf("未找到\n");
	}
}

void delete(List *plist, int number)
{
	Node *q;
	Node *p;
	for (q = NULL,p = list.head; p; q = p,p = p->next;)
	{
		if (p->value == number)
		{
			if (q)
			{
				q->next = p->next;
			} else {
				list.head = p->next;
			}

			free(p);
			break;
		}
	}
}

void clear(List *plist)
{
	Node *q;

	for (p = plist.head; p; p = q;)
	{
		q = p->next;
		free(p);
	}
}
// void insert(List *plist, int number)
// {
// 	Node *p = (Node *)malloc(sizeof(Node));
// 	p->value = number;

// 	for (p = list.head; p; p = p->next)
// 	{
// 		if (/* condition */)
// 		{
// 			/* code */
// 		}
// 	}
// }
