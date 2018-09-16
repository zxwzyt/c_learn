#!/usr/bin/env python3

# ================= 代码实现开始 =================

N = 300005

class ip:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.i = 0
        
    # 先比较x轴再比较y轴，
    def __lt__(self, other):
        if self.x == other.x:
            return self.y < other.y
        return self.x < other.x

# 两点相减得到的向量
def sub(a, b):
    return ip(a.x - b.x, a.y - b.y)

# 计算a和b的叉积（外积）
def cross(a, b):
    return a.x * b.y - a.y * b.x

# 计算二维点数组a的凸包，将凸包放入b数组中，下标均从0开始
# a, b：如上
# n：表示a中元素个数
# 返回凸包元素个数
def convex(a, b, n):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n = int(input())
a = [ip(0, 0) for i in range(n)]
b = [ip(0, 0) for i in range(n + 1)]

for i in range(n):
    a[i].x, a[i].y = map(int, input().split())
    a[i].i = i + 1
    
m = convex(a, b, n)
ans = m
for i in range(m):
    ans = (ans * b[i].i) % (n + 1)
print(ans)