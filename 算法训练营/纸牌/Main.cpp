#include <bits/stdc++.h>
using namespace std;

const int N = 500005;

bool exist[N];
int a[N], t;
int b[N], h;
int n;

// ================= 代码实现结束 =================

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &b[i]);
        exist[b[i]] = 1;
    }

    h = 1;
    t = 0;
    for (int i = 1; i <= 2 * n; ++i)
        if (!exist[i])
            a[++t] = i;

    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);

    int ans = 0;
    for (int i = 1; i <= n; ++i)
        if (a[i] > b[h])
            ++ans, ++h;

    printf("%d\n", ans);
    return 0;
}
