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
    void Mirror(TreeNode *pRoot) {
        if(! pRoot){
            return;
        }
       TreeNode *p1=NULL;
       p1=pRoot->left;
       pRoot->left=pRoot->right;
       pRoot->right=p1;
       Mirror(pRoot->left);
       Mirror(pRoot->right);
    }
};