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
    //用于记录路径
    vector<vector<int>> buffer;
    //记录目前的这一条路径
    vector<int> temp;
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
    if(root==NULL){
        return buffer;
    }
        temp.push_back(root->val);
        if((expectNumber-root->val)==0 && root->left==NULL && root->right==NULL){
            buffer.push_back(temp);
        }
        FindPath(root->left,expectNumber-root->val);
        FindPath(root->right,expectNumber-root->val);
        if(temp.size()!=0)
            temp.pop_back();
        return buffer;
    }
};

