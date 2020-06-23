function hasPath(matrix, rows, cols, path)
{
    //首先遍历矩阵，找出和给定字符串第一个相符的元素，然后进行judge
    if(!matrix||rows<0||cols<0||rows*cols<path.length||path.length==0) return false;
    //matrix.split("")到底是啥
    let copy=matrix.split("");
    //找出和第一个元素相同的，进入
    for(var i=0;i<rows;i++){
        for(let j=0;j<cols;j++){
            if(dfs(matrix,i,j,rows,cols,copy,path,0)){
                return true;
            }
        }
    }
}
function dfs(matrix,i,j,r,c,copy,path,k){
    //找到index在矩阵中变成一行时的坐标
    var index=i*c+j;
    //边界检查：当此元素不与matrix中当前元素相同时，返回false
    //当copy也就是当前元素已经走过时，返回true
    if(i<0||j<0||j>=c||path[k]!=matrix[index]||copy[index]==true) 
        return false;
    if(k==path.length-1) return true;
    copy[index]=true;
    if(dfs(matrix,i-1,j,r,c,copy,path,k+1)||
       dfs(matrix,i+1,j,r,c,copy,path,k+1)||
       dfs(matrix,i,j-1,r,c,copy,path,k+1)||
       dfs(matrix,i,j+1,r,c,copy,path,k+1)){
        return true;
    }
    copy[index]=false;
    return false;
}
