#!/usr/bin/env python3

# ================= 代码实现开始 =================

M = 505
L = 1000005

# c：trie树上的边，c[x][y]表示从节点x出发（x从1开始），字符为y的边（y范围是0到25）
# sz：sz[x]表示x节点的子树中终止节点的数量（子树包括x自身）
# cnt：trie树上节点的数目
c = [[0 for i in range(26)] for i in range(L)]
sz = [0 for i in range(L)]
cnt = 0

# 将字符串s加入到trie树中
# s：所要插入的字符串
def add(s):
    global c, sz, cnt
    ''' 请在这里设计你的算法 '''
    
# 用于计算sz数组
# x：当前节点
def dfs(x):
    global c, sz, cnt
    ''' 请在这里设计你的算法 '''

# 用字符串s沿着trie树上走，找到相应的节点
# s：所给字符串
# 返回值：走到的节点
def walk(s):
    global c, sz, cnt
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n, m = map(int, input().split())
for i in range(n):
    add(input())
dfs(0)
sz[0] = 0
for i in range(m):
    print(sz[walk(input())])
