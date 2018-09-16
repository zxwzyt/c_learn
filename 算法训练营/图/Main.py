#!/usr/bin/env python3

# ================= 代码实现开始 =================

N = 10005

# 为了减少复制开销，我们直接读入信息到全局变量中，并统计了每个点的入度到数组In中
# n, m：点数和边数
# In：In[i]表示点i的入度
# e：e[i][j]表示点i的第j条边指向的点
n, m = 0, 0
In = [0 for i in range(N)]
e = [[] for i in range(N)]

# 判断所给有向无环图是否存在唯一的合法数列
# 返回值：若存在返回1；否则返回0。
def getAnswer():
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

T = int(input())
for _ in range(T):
    n, m = map(int, input().split())
    for i in range(1, n + 1):
        In[i] = 0
        e[i].clear()
    for i in range(m):
        x, y = map(int, input().split())
        e[x].append(y)
        In[y] += 1
    print(getAnswer())
