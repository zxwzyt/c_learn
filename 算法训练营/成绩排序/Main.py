#!/usr/bin/env python3

# ================= 代码实现开始 =================

# 这是进行排序的函数
# n：题目描述中的 n
# A：各同学的算法训练营成绩
# DS：各同学的数据结构训练营成绩
# 返回值：将要输出的数字依次加入到返回值的数组中
def getAnswer(n, A, DS):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

n = int(input())
A = []
DS = []
for i in range(n):
    a, ds = map(int, input().split())
    A.append(a)
    DS.append(ds)

ans = getAnswer(n, A, DS)
cnt = 0
for i in range(n):
    print(' '.join(map(str, ans[cnt:cnt + 4])))
    cnt += 4
print(ans[cnt])
