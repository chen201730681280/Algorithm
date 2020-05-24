class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        //if(sequence.size()==0) return false;
        if(!sequence.size()) return false;
        return judge(sequence,0,sequence.size()-1);
    }
     bool judge(vector<int> a,int l,int r){
         //说明已经遍历成功
         if(l>=r) return true;
         //序列最后一个元素是根，而左边一部分是左子树，右边一部分是右子树
         //i用于寻找左右子树的分界点
         int i=r;
         while((a[i-1]>a[r]) && (i>l)){
            i--;
         }//所以i是落在右子树的第一个元素
         for(int j=i-1;j>=l;j--){
            if(a[j]>a[r]) return false;
         }

        return (judge(a,l,i-1))&&(judge(a,i,r-1));
     }
};