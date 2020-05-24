/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    //创建一个新的容器
    vector<int> a;
    //链表中有值，指向下一个节点的指针
    vector<int> printListFromTailToHead(ListNode* head) {
        //创建一个新的链表
        ListNode *p=NULL;
        p=head;
        if(p!=NULL){
            if(p->next!=NULL){
                printListFromTailToHead(p->next);
            }
            //向a的尾端插入一个数据，因此做到反序
            a.push_back(p->val);
        }
        return a;
    }
};