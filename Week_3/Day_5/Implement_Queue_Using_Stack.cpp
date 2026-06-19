/*
Problem: Implement Queue using Stacks
LeetCode: 232

Time Complexity:
push()  -> O(1)
pop()   -> Amortized O(1)
peek()  -> Amortized O(1)
empty() -> O(1)

Space Complexity: O(n)
*/

class MyQueue {
private:
    stack<int> s1, s2;

public:
    MyQueue() {
    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {

        if(s2.empty()) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int front = s2.top();
        s2.pop();

        return front;
    }

    int peek() {

        if(s2.empty()) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};
