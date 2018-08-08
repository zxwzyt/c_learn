#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

typedef long long ll;

/* 请在这里定义你需要的全局变量 */

// 这是求解整个问题的函数
// w：题目描述中的 w（所有）
// n：题目描述中的 n
// 返回值：答案
long long getAnswer(int n, vector<long long> w) {
    /* 请在这里设计你的算法 */
}

// ================= 代码实现结束 =================

int main() {
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
