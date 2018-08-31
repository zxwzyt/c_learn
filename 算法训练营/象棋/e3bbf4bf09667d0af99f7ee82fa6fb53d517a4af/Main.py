#!/usr/bin/env python3

# ================= 代码实现开始 =================

''' 请在这里定义你需要的全局变量 '''

# 求解棋盘上最多能放多少个“车”
# n：棋盘的大小为n×n的
# board：所给棋盘，对于某个位置上的数：若值为1表示可以放“车”；若值为0表示不能放“车”
# 返回值：能放“车”的最大个数
def getAnswer(n, board):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n = int(input())
_e = []
for i in range(n):
    t = list(map(int, input().split()))
    _e.append(t)
print(getAnswer(n, _e))
