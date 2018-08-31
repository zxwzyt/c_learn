#!/usr/bin/env python3

# ================= 代码实现开始 =================

''' 请在这里定义你需要的全局变量 '''

# n个物品，每个物品有体积价值，求若扔掉一个物品后装进给定容量的背包的最大价值
# n：如题
# w：长度为n+1的数组，w[i]表示第i个物品的价值（下标从1开始，下标0是一个数字-1，下面同理）
# v：长度为n+1的数组，v[i]表示第i个物品的体积
# q：如题
# qV：长度为q+1的数组，qV[i]表示第i次询问所给出的背包体积
# qx：长度为q+1的数组，qx[i]表示第i次询问所给出的物品编号
# 返回值：返回一个长度为q的数组，依次代表相应询问的答案
def getAnswer(n, w, v, q, qV, qx):
   ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

v, w, qv, qx = [], [], [], []
v.append(-1)
w.append(-1)
qv.append(-1)
qx.append(-1)
n = int(input())
for i in range(n):
    a, b = map(int, input().split())
    v.append(a)
    w.append(b)
q = int(input())
for i in range(q):
    a, b = map(int, input().split())
    qv.append(a)
    qx.append(b)
ans = getAnswer(n, w, v, q, qv, qx)
for i in ans:
    print(i)

