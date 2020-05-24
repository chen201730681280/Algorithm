/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(pHead1==NULL) return pHead2;
        if(pHead2==NULL) return pHead1;
        ListNode* p1;
        // 把pHead当作头结点而不只是头指针，所以他会有值
        
            if(pHead1->val >= pHead2->val){
                p1=pHead2;
                p1->next=Merge(pHead1,pHead2->next);
            }else{
                p1=pHead1;
                p1->next=Merge(pHead1->next,pHead2);
            }
        
        return p1;
        
    }
};