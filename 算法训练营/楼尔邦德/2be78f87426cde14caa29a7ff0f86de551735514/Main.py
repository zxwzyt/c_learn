#!/usr/bin/env python3

# ================= 代码实现开始 =================

''' 请在这里定义你需要的全局变量 '''

# 本函数传入数组 a 及所有询问，你需要求解所有询问并一并返回
# n：序列 a 的长度
# a：存储了序列 a
# Q：询问个数
# query：依次存储了所有询问的参数 x
# 返回值：一个 list，依次存放各询问的答案
def getAnswer(n, a, Q, query):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

query = []
n = int(input())
a = list(map(int, input().split()))
Q = int(input())
for i in range(Q):
    query.append(int(input()))
for i in getAnswer(n, a, Q, query):
    print(i)
