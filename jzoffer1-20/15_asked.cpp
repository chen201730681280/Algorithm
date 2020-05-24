/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/

// 翻转链表
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        //把a指向b改成b指向a
        
        
        //例子a->b->c->d
        //pre=NULL
        //next=null
        //cur=a;
        ListNode* pre=NULL;
        ListNode* next=NULL;
        ListNode* cur=pHead;
        while(cur!=NULL){
            //next=b next=c
            next=cur->next;
            //a,next=null b.next=a
            cur->next=pre;
            if(next==NULL) break;
            //pre=a pre=b
            pre=cur;
            //cur=b cur=c
            cur=next;
        }
        return cur;
    }
};