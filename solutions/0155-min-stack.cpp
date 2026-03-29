// 155. Min Stack
// Medium | Stack
// https://leetcode.com/problems/min-stack/
// Time: O(1) | Space: O(1)

class MinStack {
public:

    stack<int> min;
    stack<int> stk;


    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if (min.empty() || val <= min.top()){
            min.push(val);
        }
    }
    
    void pop() {
        if(!stk.empty()){
            if (stk.top() == min.top()){
                min.pop();
            }
            stk.pop();
        }
    }
    
    int top() {
        if(!stk.empty()){
            return stk.top();
        }
        return -1;
    }
    
    int getMin() {
        if(!stk.empty()){
            return min.top();
        }
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */