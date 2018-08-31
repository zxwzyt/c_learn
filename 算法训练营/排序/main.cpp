#include <iostream>
#include <vector>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */

// 将给定数组a升序排序
// n：数组大小
// a：所给数组，大小为n
// 返回值：排序后的数组

void sort(int L, int R){
	vector<int> a,b;
	if (L == R)
		return ;
	int mid = (L + R) >>1;
	sort(L, mid);
	sort(mid+1, R);
	int L_idx = L;
	int R_idx = mid + 1;
	int b_idx = L;
	while(L_idx <= mid && R_idx <= R)
		if(a[L_idx] < a[R_idx])
			b[b_idx++] = a[L_idx++];
		else
			b[b_idx++] = a[R_idx++];
	while(L_idx <= mid)
		b[b_idx++] = a[L_idx++];
	while(R_idx <= R)
		b[b_idx++] = a[R_idx++];
	for (int i = L; i <= R; ++i)
		a[i] = b[i];
}

vector<int> getAnswer(int n, vector<int> a) {
    /* 请在这里设计你的算法 */
	sort(0 ,n);
	return a;
}
// ================= 代码实现结束 =================

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        a.push_back(x);
    }
    a = getAnswer(n, a);
    for (int i = 0; i < n; ++i)
        printf("%d%c", a[i], " \n"[i == n - 1]);
    return 0;
}
