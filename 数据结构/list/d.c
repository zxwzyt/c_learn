#include <stdio.h>

typedef struct Lnode *List;

struct Lnode{
	int data;
	List next;
};
struct Lnode L;
List Ptrl;

int Length(List Ptrl)
{
	List p = Ptrl;
	int j = 0;
	while (p)
	{
		p = p->next;
		j++;
	}

	return j;
}

int Find(int k, List Ptrl)
{
	List p = Ptrl;
	int i = 1;
	while(p != NULL && i < k)
	{
		p = p->next;
		i++;
	}

	if (i == k)
		return p;
	else 
		return NULL;
}

void insert(int x, int i, List Ptrl)
{
	if (i == 1)
	{
		l = (List)malloc(sizeof(Lnode));
		l.next = Ptrl;
		l.data = x;
		return s;
	} 
	else 
	{	
		p = find(i-1, Ptrl);

		if (p == NULL)
		{
			//baocuo
		} else {
			l = (List)malloc(sizeof(Lnode));
			l->next = p->next;
			l->data = x;
			p->next = l;
			return Ptrl;
		}
	}
}

void delete(int i, List Ptrl)
{
	if (i == 1)
	{
		List p = Ptrl;
		if (Ptrl!=null) 
		{
			Ptrl = Ptrl->next;
		} else {
			return null;
		}

		free(s);

		return ptr;
	} 
	else 
	{	
		p = find(i-1, Ptrl);

		if (p == NULL || p->next  == null)
		{
			//baocuo
		} else {
			s = p->next;
			p->next = s->next;
			free(s);
			return Ptrl;
		}
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}