#include <bits/stdc++.h>
using namespace std;

const int N = 1003;

pair<int, int> a[N];

int n;
int dp[N][N];

// ================= 代码实现结束 =================

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        a[i] = pair<int, int> (x,y);
    }

    int ans = 0;
    for (int round = 0; round < 2; ++round)
    {
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; ++i)
        {
            dp[i][i] = a[i].second;
            for (int j = 1; j < i; ++j)
            {
                dp[i][j] = 0;
                for (int k = j; k && 2 * a[j].first <= a[i].first + a[k].first; --k)
                    dp[i][j] = max(dp[i][j], dp[j][k]);
                ans = max(ans, (dp[i][j] += a[i].second));
            }
                
        }

        for (int i = 1; i <= n; ++i)
            a[i].first = -a[i].first;
    }
        
        
    printf("%d\n", ans);
    return 0;
}
