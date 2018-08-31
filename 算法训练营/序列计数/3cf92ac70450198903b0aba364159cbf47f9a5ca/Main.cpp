#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */
const int N = 300005;

int n, d, max_value[N], min_value[N];
vector<int> a;

long long solve(int l, int r)
{
	if (l == r)
		return 0;

	int mid = (l + r) >> 1;
	long long ans = solve(l, mid) + solve(mid + 1, r);

	for (int i = mid + 1; i <= r; ++i)
	{
		min_value[i] = (i == mid + 1) ? a[i] : min(min_value[i - 1], a[i]);
		max_value[i] = (i == mid + 1) ? a[i] : max(max_value[i - 1], a[i]);
	}

	int mn = 0, mx = 0, pos = r;

	for (int i = mid; i >= l && pos > mid; --i)
	{

		mn = (i == mid) ? a[i] : min(mn, a[i]);
		mx = (i == mid) ? a[i] : max(mx, a[i]);

		for (; pos > mid && max(mx, max_value[pos]) - min(mn, min_value[pos]) > d; --pos);
		ans += pos - mid;
	}

	return ans;
}
// 求出有多少个a数组中的连续子序列（长度大于1），满足该子序列的最大值最小值之差不大于d
// n：a数组的长度
// d：所给d
// a：数组a，长度为n
// 返回值：满足条件的连续子序列的个数
long long getAnswer(int n, int d, vector<int> a) {

	// long long ans = 0;
	// for (int i = 0; i < int(a.size()); ++i)
	// {
	// 	int mx = a[i];
	// 	int mn = a[i];

	// 	for (int j = i + 1; j < int(a.size()); ++j)
	// 	{
	// 		mx = max(mx, a[j]);
	// 		mn = min(mn, a[j]);
	// 		if (mx - mn <= d)
	// 		{
	// 			ans++;
	// 		}
	// 	}
	// }

	// return ans;
    /* 请在这里设计你的算法 */
    ::n = n;
    ::d = d;
    ::a = a;

    return solve(0, n - 1);
}

// ================= 代码实现结束 =================


int main() {
    int n, d;
    scanf("%d%d", &n, &d);
    vector<int> a;
    a.resize(n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("%lld\n", getAnswer(n, d, a));
    return 0;
}
