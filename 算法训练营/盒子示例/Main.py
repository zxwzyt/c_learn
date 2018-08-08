#!/usr/bin/env python3

# ================= 代码实现开始 =================

''' 请在这里定义你需要的全局变量 '''

# 执行操作时会调用这个函数
# op：对应该次操作的 op（具体请见题目描述）
# x：对应该次操作的 x（具体请见题目描述）
# 返回值：如果输出为"Succeeded"，则这个函数返回 1，否则返回 0
def check(op, x):
    ''' 请在这里设计你的算法 '''

# ================= 代码实现结束 =================

Q = int(input())
for _ in range(Q):
    op, x = map(int, input().split())
    print("Succeeded" if check(op, x) else "Failed")