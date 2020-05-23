/*function ListNode(x){
    this.val = x;
    this.next = null;
}*/
//从尾到头返回一个arraylist
function printListFromTailToHead(head)
{
    // write code here
    var a=[];
    while(head){
        a.unshift(head.val);
        //a.push(head.val);
        head=head.next;
    }
    return a;
    //return a.reverse();
}