class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int top=0;
        int bottom=rows-1;
        int left=0;
        int right=cols-1;
        vector<int> result;
        //向右遍历
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            //第一行已经输出
            top++;
            if(top<=bottom){
                for(int j=top;j<=bottom;j++){
                    result.push_back(matrix[j][right]);
                }
            }
            right--;
            if(left<=right && top<=bottom){
                for(int m=right;m>=left;m--){
                    result.push_back(matrix[bottom][m]);
                }
            }
            bottom--;
            if(top<=bottom && left<=right){
             for(int k=bottom;k>=top;k--){
                 result.push_back(matrix[k][left]);
             }
            }
            left++;
        }
       return result;
    }
};