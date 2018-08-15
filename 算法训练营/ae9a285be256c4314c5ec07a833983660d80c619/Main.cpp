#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */
    
// 给定一个1到n的排列，依次插入到二叉树中，返回前序遍历和后序遍历
// n：如题意
// sequence：给定的排列，大小为n
// 返回值：将要输出的元素依次加入到返回值中
vector<int> getAnswer(int n, vector<int> sequence) {
    /* 请在这里设计你的算法 */
}

// ================= 代码实现结束 =================

int main() {
    int n;
    scanf("%d", &n);
    vector<int> sequence;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        sequence.push_back(x);
    }
    vector<int> ans = getAnswer(n, sequence);
    for (int i = 0; i < n; ++i)
        printf("%d%c", ans[i], " \n"[i == n - 1]);
    for (int i = 0; i < n; ++i)
        printf("%d%c", ans[n + i], " \n"[i == n - 1]);
    return 0;
}
