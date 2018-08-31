#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */
int allOne;
vector<bool> vis[2];
string ans;

int twoPow(int x)
{
	return 1 << x;
}

void dfs(int u)
{
	for (int i = 0; i < 2; ++i)
	{
		if (!vis[i][u])
		{
			int v = ((u << 1) | i) & allOne;
			vis[i][u] = 1;
			dfs(v);
			ans.push_back('0' + i);
		}
	}
}
// 本函数求解大转盘上的数，你需要把大转盘上的数按顺时针顺序返回
// n：对应转盘大小，意义与题目描述一致，具体见题目描述。
// 返回值：将大转盘上的数按顺时针顺序放到一个string中并返回
string getAnswer(int n) {
    /* 请在这里设计你的算法 */
    allOne = twoPow(n - 1) -1;
    ans = "";
    for (int i = 0; i < 2; ++i)
    	vis[i].resize(twoPow(n - 1), 0);

    dfs(0);
    return ans;
}

// ================= 代码实现结束 =================

int main() {
    int n;
    scanf("%d", &n);
    cout << getAnswer(n) << endl;
    return 0;
}
