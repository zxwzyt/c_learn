#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

const int N = 500005;

char s[N * 2];
int len[N * 2];

/* 请在这里定义你需要的全局变量 */

// 计算str中有多少个回文子串
// 返回值：子串的数目
long long getAnswer(string str) {
    /* 请在这里设计你的算法 */
    int n = str.size();

    for (int i = n; i; --i)
    {
    	s[i << 1] = str[i - 1], s[i << 1 | 1] = 0;
    }

    n = n << 1 | 1;
    s[1] = 0, s[0] = 1, s[n+1] = 2;

    int cur = 1;
    long long ans = 0;

    for (int i = 2; i <= n ; ++i)
    {
    	int &now = len[i], pos = (cur << 1) - i;
    	now = max(min(len[pos],cur + len[cur] - i), 0);
    	while (s[i - now -1] == s[i + now + 1])
    		++now;
    	if (i + now > cur + len[cur])
    	{
    		cur = i;
    	}
    	ans += (now + 1) >> 1;
    }

    return ans;
}

// ================= 代码实现结束 =================

char _s[N];

int main() {
    scanf("%s", _s + 1);
    printf("%lld\n", getAnswer(_s + 1));
    return 0;
}
