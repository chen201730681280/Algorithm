/*function RandomListNode(x){
    this.label = x;
    this.next = null;
    this.random = null;
}*/
function Clone(pHead)
{
    // write code here
    if(pHead==null)return null;
    //一定要用new来创建
    var node=new RandomListNode(pHead.label);
    node.random=pHead.random;
    node.next=Clone(pHead.next);
    return node;
}