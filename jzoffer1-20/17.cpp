/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        
        if(!pRoot1 || !pRoot2) return false;
        //当遇到节点相同的
        if(pRoot1->val==pRoot2->val){
            //判断是否是子结构
            if(isSubtree(pRoot1,pRoot2)){
                return true;
            }
        }
        //判断从左子树开始是否相同
        if(HasSubtree(pRoot1->left,pRoot2)){
            return true;
        }
        //判断右子树是否有此子结构
        if(HasSubtree(pRoot1->right,pRoot2))
        { return true;}
        
        return false;
    }
    
    bool isSubtree(TreeNode* pRoota,TreeNode* pRootb){
        //必须要pRootb在前才可以，为何？因为当他们都为空时，直接返回false了
        if(!pRootb) return true;
        if(!pRoota) return false;
        if(pRoota->val==pRootb->val){
            if(isSubtree(pRoota->left,pRootb->left)&&isSubtree(pRoota->right,pRootb->right)){
                return true;
            }
        }
               return false;
        
    }
};