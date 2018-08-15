#!/usr/bin/env python3

# ================= 代码实现开始 =================

''' 请在这里定义你需要的全局变量 '''

# 给定一个n个点m条边的无向图，第i条边边权为i，求所有需要升级的边
# n：如题意
# m：如题意
# U：大小为m的数组，表示m条边的其中一个端点
# V：大小为m的数组，表示m条边的另一个端点
# 返回值：所有需要升级的边，从小到大排列；第一小问的答案自然即为返回值的size，所以你不必考虑如何返回size
def getAnswer(n, m, U, V):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n, m = map(int, input().split())
U, V = [], []

for i in range(m):
    u, v = map(int, input().split())
    U.append(u)
    V.append(v)

ans = getAnswer(n, m, U, V)
print(len(ans))
print(*ans, sep='\n')
