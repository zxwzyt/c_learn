#!/usr/bin/env python3

# ================= 代码实现开始 =================

''' 请在这里定义你需要的全局变量 '''

# n：物品个数
# V：背包的体积
# t：长度为n的数组，第i个元素若为0，表示物品i为单个物品；若为1，表示物品i为多个物品。（i下标从0开始，下面同理）
# w：长度为n的数组，第i个元素表示第i个物品的价值
# v：长度为n的数组，第i个元素表示第i个物品的体积
# 返回值：最大价值之和
def getAnswer(n, V, t, w, v):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n, V = map(int, input().split())
T, W, _V = [], [], []
for i in range(n):
    t, w, v = map(int, input().split())
    T.append(t)
    W.append(w)
    _V.append(v)
print(getAnswer(n, V, T, W, _V))
