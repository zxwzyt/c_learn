#include "/Users/anita/Documents/code/my_code/c_practice/bits/stdc++.h"
using namespace std;

const int N = 100005;

struct node
{
    int val, l, r;
} t[N];

int root, cnt;

int insert(int v, int x)
{
    if (x == 0)
    {
        cnt = cnt + 1;
        x = cnt;
        t[x].val = v;
        t[x].l = 0;
        t[x].r = 0;
        
        return x;
    }
    
    if (t[x].val > v)
        t[x].l = insert(v, t[x].l);
    else
        t[x].r = insert(v, t[x].r);
    
    return x;
}

void dlr(int x, vector<int> &ans)
{
    if (x)
    {
        ans.push_back(t[x].val);
        dlr(t[x].l, ans);
        dlr(t[x].r, ans);
    }
}

void lrd(int x, vector<int> &ans)
{
    if (x)
    {
        lrd(t[x].l, ans);
        lrd(t[x].r, ans);
        ans.push_back(t[x].val);
    }
}

vector<int> getAnswer(int n, vector<int> sequence) {
    root = cnt = 0;
    for (int i = 0; i < int(sequence.size()); ++i)
        root = insert(sequence[i], root);
    
    vector<int> ans;
    dlr(root, ans);
    lrd(root, ans);
    
    return ans;
}

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

