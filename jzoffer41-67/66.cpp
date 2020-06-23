class Solution {
public:
    //首先看-1，0，这是上一行的
    //0,1右边
    //1，0下
    //0，-1左边
    int dir[5]={-1,0,1,0,-1};
    int check(int n){
        int sum=0;
        while(n){
            sum+=(n%10);
            n=n/10;
        }
        return sum;
    }
     void dfs(int x,int y,int sho,int r,int c,int &ret,vector<vector<int>> &mark)
    {
         //检查下标是否还在数组里面，且是否访问
        if(x<0||y<0||x>=r||y>=c||mark[x][y]==1) return;
         //检查当前坐标是否满足条件
        if(check(x)+check(y)>sho) return;
        mark[x][y]=1;
        ret++;
        for(int i=0;i<4;++i){
            dfs(x+dir[i],y+dir[i+1],sho,r,c,ret,mark);
        }
    }
    int movingCount(int threshold, int rows, int cols)
    {
        if(threshold<0) return 0;
        int ret=0;
        //检查当前坐标是否满足条件
        vector<vector<int>> mark(rows,vector<int>(cols,-1));
        dfs(0,0,threshold,rows,cols,ret,mark);
        return ret;
    }
   

};