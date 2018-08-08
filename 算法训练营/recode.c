#include <stdio.h>

typedef long long ll;

priority_queue<ll, vector<ll>, greater<ll>> pq;

long long getAnswer(int n, vector<long long> w)
{
	for (int i = 0; i < n; ++i)
		pq.push(w[i]);

	ll sum = 0;

	while (pq.size() > )
	{
		ll newEle = 0;

		for (int k = 0; k < 2; ++k)
		{
			newEle = ;
		}

		sum += 

		pq.push(newEle);
	}

	return sum;
}

int main()
{
	int n;
    scanf("%d", &n);
    vector<long long> w;
    for (int i = 0; i < n; ++i) {
        long long x;
        scanf("%lld", &x);
        w.push_back(x);
    }
    
    printf("%lld\n", getAnswer(n, w));
    return 0;
}