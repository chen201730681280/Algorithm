class Solution
{
public:
    void push(int node) {
        //栈一存储正常push的值
        stack1.push(node);
     
    }

    int pop() {
        int a=0;
        int b=0;
        if(stack2.empty())
        {
            while(!stack1.empty())
            {
                b=stack1.top();
                //不返回值
                stack1.pop();
                stack2.push(b);
            }
        }
            a=stack2.top();
            stack2.pop();
            return a;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};