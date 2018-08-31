#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */
// 本函数传入数组 a 及所有询问，你需要求解所有询问并一并返回
// n：序列 a 的长度
// a：存储了序列 a
// Q：询问个数
// query：依次存储了所有询问的参数 x
// 返回值：一个 vector<int>，依次存放各询问的答案
vector<int> getAnswer(int n, vector<int> a, int Q, vector<int> query) {
    vector<int> ans;
    ans.clear();
    sort(a.begin(), a.end());
    for (int i = 0; i < Q; ++i) 
    {
        int key = query[i];
        int l = -1, r = n, mid;
        while (1 + l < r) {
            mid = (l + r) >> 1;
            if (key > a[mid])
                l = mid;
            else
                r = mid;
        }
        int pos = r;
        if (pos >= n)
            ans.push_back(-1);
        else
            ans.push_back(a[pos]);
    }

    return ans;
}

// ================= 代码实现结束 =================

int main() {
    int n, Q, tmp;
    vector<int> a, query;
    a.clear();
    query.clear();
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &tmp);
        a.push_back(tmp);
    }
    scanf("%d", &Q);
    for (int i = 0; i < Q; ++i) {
        scanf("%d", &tmp);
        query.push_back(tmp);
    }
    vector<int> ans = getAnswer(n, a, Q, query);
    for (int i = 0; i < Q; ++i)
        printf("%d\n", ans[i]);
    return 0;
}
