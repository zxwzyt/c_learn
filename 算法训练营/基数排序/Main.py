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

def hashArr(a, n):
    x = 998244353
    ret = 0
    for i in range(n):
        ret ^= (a[i] + x)
        x = nextInt(x)
    return ret

N = 100000000

# a：输入中给定的数组
# _a：
a = [] # 为了省去传入数据花费的时间，我们直接将你需要排序的数组开设成了全局变量
_a = [] # 用于辅助基数排序的临时数组

m = 16 # 基数排序中的参数，表示每次排序的二进制位数
B = 1 << m # 2 的 m 次幂，表示一次排序中的值域
b = B - 1 # 这是一个用于辅助计算的常值，它在二进制下的最低 m 位均为 1

# sum：在基数排序中记录各值出现的次数
sum = []

''' 请在这里定义你需要的全局变量 '''

# 这是你的排序函数，你需要将全局变量中的 a 数组进行排序
# n, k：意义与题目描述相符
# 返回值：本函数需不要返回值（你只需要确保 a 被排序即可）
def sorting(n, k):
    global a, _a, sum
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n, k, seed = map(int, input().split())
a = [0 for i in range(n + 1)]
_a = [0 for i in range(n + 1)]
initData(a, n, k, seed)

sorting(n, k)

print(hashArr(a, n))

