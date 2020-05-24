/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/



// 第一个链表只能走k-1步，不然的话第二个链表只能到达倒数第k个节点的前一个
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
         if(pListHead==NULL || k==0) return NULL;
        //设置一个新的头结点
        ListNode* p2=pListHead;
        ListNode* p1=pListHead;
        
        int n=k-1;
       for(int i=0;i<n;i++){
           if(p2->next != NULL)
                p2 = p2->next;
            else
                return NULL;
        }
        while(p2->next!=NULL){
            p2=p2->next;
            p1=p1->next;
        }
        return p1;
    }
};