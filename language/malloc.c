#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	int *a;
	scanf("%d", &number);
	a = (int *)malloc(number * sizeof(int));
	for (int i = 0; i < number; ++i)
	{
		scanf("%d", &a[i]);
		printf("%d\n", a[i]);
	}

	free(a);
	return 0;
}

// int main()
// {
// 
// 	void * p = 0;
// 	int cnt = 0;
// 	while ((p = malloc(100 * 1024 * 1024)))
// 	{
// 		cnt++;
// 	}

// 	printf("分配了%d00MB的空间\n", cnt);
//	free(p);
// 	return 0;
// }