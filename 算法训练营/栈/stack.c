#include <stdio.h>

char stack[10000][20];
int top = 0;

void push (char name[])
{
	for (int i = 0; i < 20; ++i)
	{
		stack[top][i] = name[i];
	}

	top++;
}

char *pop ()
{
	return stack[--top];
}

char *query (int pos)
{
	return stack[pos-1];
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int option;
		scanf("%d", &option);
		char name[20];
		if (option == 1)
		{	
			scanf("%s", name);
			push(name);
		} else if (option == 2) {
			printf("%s\n", pop());
		} else {
			int pos;
			scanf("%d", &pos);
			printf("%s\n", query(pos));
		}
	}

	return 0;
}