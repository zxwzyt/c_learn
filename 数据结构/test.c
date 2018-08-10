#include <stdio.h>
#include <time.h>
void PrintN(int N)
{
	for (int i = 0; i < N; ++i)
	{
		printf("%d\n", i);
	}
}

// void PrintN(int N)
// {
// 	if (N)
// 	{
// 		PrintN(N-1);
// 		printf("%d\n", N);
// 	}
// }

clock_t start, stop;

int main()
{
	start = clock();
	PrintN(100000);
	stop = clock();

	printf("%f\n", (float)(stop - start));
	return 0;
}