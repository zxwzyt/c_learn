#include <stdio.h>

int amount[] = {1, 3, 10, 34};
char *name[] = {"penney","nickcl", "dime", "quarter", ""};
int search(int key, int a[], int len)
{
	int ret = -1;
	for (int i = 0; i < len; i++)
	{
		if (key == a[i])
		{
			ret = i;
			break;
		}
	}

	return ret;
}

int main()
{
	int k = 10;
	int r = search(10, amount, sizeof(amount)/sizeof(amount[0]));

	if (r > -1)
	{
		printf("%s\n", name[r]);
	}
	return 0;
}