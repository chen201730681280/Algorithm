var stack1=[];
function push(node)
{
    stack1.push(node);
}
function pop()
{
    stack1.pop();
}
function top()
{
    return stack1[stack1.length-1];
}
function min()
{
    return Math.min(...stack1);
    //return Math.min.apply(this.stack1);
}