#!/usr/bin/env python3

# ================= 代码实现开始 =================

N = 1005

''' 请在这里定义你需要的全局变量 '''

# 为了减少复制开销，我们直接读入信息到全局变量中
# a, b：题目所述数组，a的大小为(n+1)*(m+1)，b的大小为(p+1)*(q+1)，下标均从1开始有意义（下标0无意义，你可以直接无视）
# n, m, p, q：题中所述
a = [[] for i in range(N)]
b = [[] for i in range(N)]
n, m, p, q = 0, 0, 0, 0

# 求出a中有哪些位置出现了b
# 返回值：一个二元组的数组，包含所有出现的位置
def getAnswer():
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n, m, p, q = map(int, input().split())
for i in range(1, n + 1):
    a[i] = list(map(int, input().split()))
    a[i].insert(0, 0)
for i in range(1, p + 1):
    b[i] = list(map(int, input().split()))
    b[i].insert(0, 0)
ans = getAnswer()
for i in ans:
    print(' '.join(map(str, i)))