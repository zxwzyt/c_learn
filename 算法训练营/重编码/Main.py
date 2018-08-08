#!/usr/bin/env python3

# ================= 代码实现开始 =================

''' 请在这里定义你需要的全局变量 '''

# 这是求解整个问题的函数
# w：题目描述中的 w（所有）
# n：题目描述中的 n
# 返回值：答案
def getAnswer(n, w):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n = int(input())
w = []
for i in range(n):
    x = int(input())
    w.append(x)
print(getAnswer(n, w))
