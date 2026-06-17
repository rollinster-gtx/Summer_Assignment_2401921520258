/*
Problem: Min Stack
LeetCode: 155

Time Complexity:
push()  -> O(1)
pop()   -> O(1)
top()   -> O(1)
getMin()-> O(1)

Space Complexity: O(n)
*/

class MinStack {
private:
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {
    }

    void push(int val) {
        st.push(val);

        if(minSt.empty() || val <= minSt.top())
            minSt.push(val);
    }

    void pop() {
        if(st.top() == minSt.top())
            minSt.pop();

        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};
