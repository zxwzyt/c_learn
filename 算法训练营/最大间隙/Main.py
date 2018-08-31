#!/usr/bin/env python3

# ================= 代码实现开始 =================

# 以下代码不需要解释，你只需要知道这是用于生成数据的就行了

def nextInt(x):
    x ^= (x << 13) & 0xFFFFFFFF
    x ^= (x >> 17) & 0xFFFFFFFF
    x ^= (x << 5) & 0xFFFFFFFF
    return x

def initData(a, n, k, seed):
    for i in range(n):
        seed = nextInt(seed)
        a[i] = seed >> (32 - k)

# 以上代码不需要解释，你只需要知道这是用于生成数据的就行了

''' 请在这里定义你需要的全局变量 '''

# 这是求解答案的函数，你需要对全局变量中的 a 数组求解 maxGap 问题
# n, k：意义与题目描述相符
# 返回值：即为答案（maxGap）
def maxGap(n, k):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n, k, seed = map(int, input().split())

initData(a, n, k, seed)

print(maxGap(n, k))