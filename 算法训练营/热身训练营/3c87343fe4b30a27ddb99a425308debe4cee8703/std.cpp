#include <bits/stdc++.h>
using namespace std;

stack<int> sorting(stack<int>);

int main() {
    int n;
    cin >> n;
    stack<int> myStack;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        myStack.push(tmp);
    }
    stack<int> result = sorting(myStack);
    vector<int> answer;
    while (!result.empty()) {
        answer.push_back(result.top());
        result.pop();
    }
    for (auto i = answer.rbegin(); i != answer.rend(); ++i)
        cout << *i << endl;
    return 0;
}

// myStack：输入栈，栈中的所有元素即是待排序的元素
// 返回值：输出栈，即排序后的序列，满足从栈底至栈顶为升序
stack<int> sorting(stack<int> myStack) {
    stack<int> result; // result存放了返回值，即输出栈
    if (myStack.empty()) // 边界情况
        return result;

    int tmp = myStack.top(); // tmp记录的是下一个要插入到result栈中的数
    myStack.pop();
    while (!myStack.empty() || (!result.empty() && result.top() > tmp)) { // 注意后面的判断条件不要漏
        // 如果将tmp压入到result是顺序的
        // 那么可以直接将tmp压入进result栈中
        // 并且从myStack栈中取出栈顶作为新的tmp
        if (result.empty() || result.top() <= tmp) {
            result.push(tmp);
            tmp = myStack.top();
            myStack.pop();
        } else { // 否则我们得将比tmp大的元素（目前是result栈顶）重新放回myStack栈中
            myStack.push(result.top()); 
            result.pop();
        }
    }
    result.push(tmp); // 最后别忘了将tmp压回result栈中
    return result;
}