#!/usr/bin/env python3

# ================= 代码实现开始 =================

N = 100005

# Queue：队列
# head：队首位置
# tail：队尾位置的后一位
Queue = ['' for i in range(N)]
head, tail = 0, 0

# 队尾入队
# name：入队人的姓名
def enqueue(name):
    global tail
    ''' 请在这里设计你的算法 '''

# 队首出队
# 返回值：队首的姓名
def dequeue():
    global head
    ''' 请在这里设计你的算法 '''

# 询问队列中某个位置上的人的姓名（队首位置为1，往后位置依次递增）
# pos：询问的位置
# 返回值：pos位置上人的姓名
def query(pos):
    global head
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n = int(input())
for _ in range(n):
    tmp = input().split(' ')
    op = int(tmp[0])
    if op == 1:
        name = tmp[1].strip('\n')
        enqueue(name)
    elif op == 2:
        print(dequeue())
    else:
        pos = int(tmp[1])
        print(query(pos))

