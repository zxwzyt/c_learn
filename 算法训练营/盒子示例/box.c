#include <stdio.h>

int length = 0;
typedef long long ll;

ll arr[1000003];

int delete(ll *num)
{
	for (int i = 0; i < length; ++i)
	{
		if (arr[i] == *num)
		{
			arr[i] = -1;
			return 1;
		}
	}

	return 0;
}

int insert (ll *num)
{
	int exist = 0;

	for (int i = 0; i < length; ++i)
	{
		if (arr[i] == *num)
		{
			exist = 1;
		}
	}

	if (exist == 0)
	{
		arr[length++] = *num;
		return 1;
	} else {
		return 0;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	
	int op;
	ll number;

	for (int i = 0; i < n; ++i)
	{	
		scanf("%d %lld", &op, &number);

		if (op == 1)
		{
			if (insert(&number) == 1)
			{
				puts("Succeeded");
			} else {
				puts("Failed");
			}
		} else {
			if (delete(&number) == 1)
			{
				puts("Succeeded");
			} else {
				puts("Failed");
			}
		}
	}

	return 0;
}