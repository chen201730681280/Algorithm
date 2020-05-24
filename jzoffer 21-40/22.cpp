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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> a;
        //队列实现
        queue<TreeNode*> b;
        if(root==NULL) return a;
        b.push(root);
        while(!b.empty()){
            a.push_back(b.front()->val);
            if(b.front()->left){
                b.push(b.front()->left);
            }
            if(b.front()->right){
                b.push(b.front()->right);
            }
            b.pop();
        }
        return a;
    }
};