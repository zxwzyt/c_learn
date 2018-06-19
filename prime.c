#include <stdio.h>

//素数
int prime(int p)
{
	if (p <= 1)
	{
		return 0;
	} else {
		for (int i = 2; i < p; ++i)
		{
			if (p%i == 0)
			{
				return 1;
			} else {
				return 0;
			}
		}
	}

	return 0;
}

int PrimeSum(int m, int n)
{
	int sum = 0;

	for (int i = m; i <= n ; ++i)
	{
		if (prime(i) == 1)
		{
			sum += i;
		}
	}

	return sum;
}

int main()
{
    int p;

    int m = 0;
    int n = 1;

    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}