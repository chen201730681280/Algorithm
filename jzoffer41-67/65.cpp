class Solution {
    private:
 
    bool isPath(char *matrix,vector<char> flags,char* str,int x,int y,int rows, int cols)
    {
        if(x<0 || x>=rows || y<0 || y>=cols) //越界的点
            return false;     
 
        if( matrix[x*cols+y]== *str  &&  flags[x*cols+y]==0 )
        {
            flags[x*cols+y]=1;
 
            if(*(str+1)==0)  // 字符串结尾了（最后一个满足的）
                return true;
 
            bool condition =isPath(matrix,flags,(str+1),x,y-1,rows,cols) ||
                isPath(matrix,flags,(str+1),x-1,y,rows,cols)||
                isPath(matrix,flags,(str+1),x,y+1,rows,cols)||
                isPath(matrix,flags,(str+1),x+1,y,rows,cols);           
            if(condition == false)
                flags[x*cols+y]=0;
            return condition;             
        }           
        else
            return false;
 
 
 
 
    }
    public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
         
        vector<char> flags(rows*cols,0);
        bool condition=false;
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
            {
                condition= (condition || isPath(matrix,flags,str,i,j,rows,cols) );
            }
        return condition;    
    }
 
};
