#!/usr/bin/env python3

# ================= 代码实现开始 =================

''' 请在这里定义你需要的全局变量 '''

# 这个函数用于计算答案（最短路）
# n：节点数目
# m：双向边数目
# U,V,W：分别存放各边的两端点、边权
# s,t：分别表示起点、重点
# 返回值：答案（即从 s 到 t 的最短路径长度）
def shortestPath(n, m, U, V, W, s, t):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n, m, s, t = map(int, input().split())
U, V, W = [], [], []
for i in range(m):
    u, v, w = map(int, input().split())
    U.append(u)
    V.append(v)
    W.append(w)

print(shortestPath(n, m, U, V, W, s, t))
