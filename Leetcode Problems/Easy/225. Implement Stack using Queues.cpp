#include <queue>

using namespace std;

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        topElem = x;
        queue2.push(x);

        while (!queue1.empty())
        {
            queue2.push(queue1.front());
            queue1.pop();
        }

        queue<int> temp = queue1;
        queue1 = queue2;
        queue2 = temp;
        
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int t = queue1.front();
        queue1.pop();
        if (!queue1.empty()) {
            topElem = queue1.front();
        }
        return t;
    }

    /** Get the top element. */
    int top() {
        return topElem;
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return queue1.empty();
    }

private:
    queue<int> queue1;
    queue<int> queue2;
    int topElem;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */