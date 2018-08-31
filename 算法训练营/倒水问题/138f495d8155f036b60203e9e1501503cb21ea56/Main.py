#!/usr/bin/env python3

# ================= 代码实现开始 =================

class pii:
    def __init__(self, fi=0, se=0):
        self.fi = fi
        self.se = se

''' 请在这里定义你需要的全局变量 '''

# 计算答案的函数
# n, m, t, d：意义均与题目描述一致
# 返回值：即为答案
def getAnswer(n, m, t, d):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n, m, t, d = map(int, input().split())
print(getAnswer(n, m, t, d))
