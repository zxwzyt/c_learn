#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */
bool check(long long d, int n, int m, vector<int> &a)
{
	long long sum = 0;
	int cnt = 1;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] > d)
			return false;

		sum += a[i];

		if (sum > d)
		{
			sum = a[i];
			cnt = cnt + 1;
		}
	}

	return cnt <= m;
}
// 将所给数组分成连续的m份，使得数字之和最大的那一份的数字之和最小
// n：数组大小
// m：题中的m
// a：所给数组，大小为n
// 返回值：最优方案中，数字之和最大的那一份的数字之和
long long getAnswer(int n, int m, vector<int> a) {

	long long l = 1, r = 0;

	for (int i = 0; i < n; ++i)
	{
		r += a[i];
	}
	
	while (l <= r)
	{
		long long mid = (l + r) >> 1;
		if (check(mid, n, m, a))
			r = mid -1;
		else 
			l = mid +1;
	}

	return r + 1;
}

// ================= 代码实现结束 =================

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<int> a;
    a.resize(n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("%lld\n", getAnswer(n, m, a));
    return 0;
}

