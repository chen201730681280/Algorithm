var res=0;
var dir=[-1,0,1,0,-1];
function check(n){
    let sum=0;
    while(n){
        sum+=parseInt(n%10);
        n=parseInt(n/10);
    }
    return sum;
}
function dfs(x,y,th,r,c,mark){
    //首先检查下标
    if(x>=r||x<0||y>=c||y<0||mark[x][y]==1) return;
    //检查相加条件
    if(check(x)+check(y)>th) return;
    mark[x][y]=1; res++;
    for(let i=0;i<4;++i){
       dfs(x+dir[i],y+dir[i+1],th,r,c,mark);
    }
   
    
}

function movingCount(threshold, rows, cols)
{
   if(threshold<0) return 0;
   res=0;
   let mark=[];
   for (let i = 0; i < rows; i++) {
      mark.push([]);
      for (let j = 0; j < cols; j++) {
        mark[i][j] = -1;
      }
    }
    dfs(0,0,threshold,rows,cols,mark);
  
    return res;
}

console.log(movingCount(15,20,20));//359