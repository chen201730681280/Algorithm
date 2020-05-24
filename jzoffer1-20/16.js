/*function ListNode(x){
    this.val = x;
    this.next = null;
}*/
function Merge(pHead1, pHead2)
{
    // write code here
    if(pHead1==null) return pHead2;
    if(pHead2==null)  return pHead1;
    var p3;
    if(pHead1.val>pHead2.val){
        p3=pHead2;
        p3.next=Merge(pHead1,pHead2.next);
    }else{
        p3=pHead1;
        p3.next=Merge(pHead1.next,pHead2)
    }
    return p3;
}