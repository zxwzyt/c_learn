#!/usr/bin/env python3

# ================= 代码实现开始 =================

''' 请在这里定义你需要的全局变量 '''

# 给定一个1到n的排列，依次插入到二叉树中，返回前序遍历和后序遍历
# n：如题意
# sequence：给定的排列，大小为n
# 返回值：将要输出的元素依次加入到返回值中
def getAnswer(n, sequence):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n = int(input())
sequence = list(map(int, input().split(' ')))
ans = getAnswer(n, sequence)
print(' '.join(map(str, ans[0:n])))
print(' '.join(map(str, ans[n:n+n])))
    