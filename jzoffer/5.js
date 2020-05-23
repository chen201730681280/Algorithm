var stack1=[];
var stack2=[];
function push(node)
{
    // write code here
    stack1.push(node);
    
}
function pop()
{
    if(stack2.length==0){
        while(stack1.length!=0)
        {stack2.push(stack1.pop());}
    }
    return stack2.pop();
}