// 两个方法都是成功的


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size()==0) return NULL;
        TreeNode* root=new TreeNode(pre[0]);
        vector<int> leftPre;
        vector<int> leftVin;
        vector<int> rightPre;
        vector<int> rightVin;
        int flag=0;
        for(int i=0;i<pre.size();i++){
            if(flag==0 && vin[i]!=root->val){
                leftVin.push_back(vin[i]);
                leftPre.push_back(pre[i+1]);
            }else if(vin[i]==root->val){
                flag=1;
            }else if(vin[i]!=root->val && flag==1){
                rightVin.push_back(vin[i]);
                rightPre.push_back(pre[i]);
            }
        }
        root->left=reConstructBinaryTree(leftPre,leftVin);
        root->right=reConstructBinaryTree(rightPre,rightVin);
        return root;
    }
};










// /**
//  * Definition for binary tree
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
//     //前序遍历中第一个为根结点，左半部分是左子树，右半部分是右子树，循环
//     //中序遍历中根结点左右分别为左右子树
//         if(pre.size()==0) return NULL;
//         //树的根结点
//         int root=pre[0];
//         //建立一个根结点，构造二叉树
//         TreeNode* head=new TreeNode(pre[0]);
//         //记录根结点的索引
//         int gen =0;
//         for(int i=0;i<pre.size();i++){
//             //在中序遍历中找到根结点
//             if(root==vin[i])
//             {
//                 gen=i;
//                 break;
//             }
//         }
//         //创造左右子树的遍历
//         vector<int> left_pre,left_vin,right_pre,right_vin;
//         for(int j=0;j<gen;j++){
//             left_pre.push_back(pre[j+1]);
//             left_vin.push_back(vin[j]);
//         }
//         for(int k=gen+1;k<vin.size();k++){
//            right_pre.push_back(pre[k]);
//             right_vin.push_back(vin[k]);
//         }
//         head->left=reConstructBinaryTree(left_pre,left_vin);
//         head->right=reConstructBinaryTree(right_pre,right_vin);
//         return head;
        
//     }
// };