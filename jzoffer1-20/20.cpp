class Solution {
public:
    void push(int value) {
        stack1.push(value);
        if(stack2.empty())
        {
            stack2.push(value);
        }
        if(stack2.top()>value){
            stack2.push(value);
        }
    }
    void pop() {
        if(stack1.top()==stack2.top())
        {
            stack2.pop();
        }
        stack1.pop();
        
    }
    int top() {
        return stack1.top();
    }
    int min() {
        return stack2.top();
    }
private:
    stack<int> stack1;
    stack<int> stack2;
};