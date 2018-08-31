#!/usr/bin/env python3

# ================= 代码实现开始 =================

# 类似c++中的lower_bound
def lower_bound(f, n, a):
    l, r = 1, n + 1
    while (l <= r):
        m = (l + r) >> 1
        if a <= f[m]:
            r = m - 1
        else:
            l = m + 1
    return r + 1

# 类似c++中的upper_bound
def upper_bound(f, n, a):
    l, r = 1, n + 1
    while (l <= r):
        m = (l + r) >> 1
        if a < f[m]:
            r = m - 1
        else:
            l = m + 1
    return r + 1

''' 请在这里定义你需要的全局变量 '''

# 计算最长公共子序列的长度
# n：表示两序列长度
# a：描述序列 a（这里需要注意的是，由于 a 的下标从 1 开始，因此 a[0] 的值为-1，你可以忽略它的值，只需知道我们从下标 1 开始存放有效信息即可） 
# b：描述序列b（同样地，b[0] 的值为 -1）
# 返回值：最长公共子序列的长度
def LCS(n, a, b):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.insert(0, -1)
b.insert(0, -1)
print(LCS(n, a, b))
