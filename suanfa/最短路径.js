// 给定一个包含非负整数的 m x n 网格，请找出一条从左上角到右下角的路径，
// 使得路径上的数字总和为最小。

// 说明：每次只能向下或者向右移动一步。
var firstRow=readline().split(' ');
var m=firstRow[0];
var n=firstRow[1];

var arr=[];
while(line=readline()){
    var a=line.split(' ').map(Number);
    arr.push(a);
}
function result(m,n,arr){
    var sum=0;
    var dp=[];
    for(let i=0;i<m;i++){
        dp[i]=[];
        for(let j=0;j<n;j++){
            if(i==0&&j==0){
                dp[i][j]=arr[0][0];
            }else if(i==0&&j!=0){
                d[i][j]=d[i][j-1]+arr[i][j];
            }else if(i!=0 &&j==0){
                d[i][j]=d[i-1][j]+arr[i][j];
            }else{
                d[i][j]=Math.min(d[i-1][j],d[i][j-1])+arr[i][j];
            }
        }
    }
    return a[m-1][n-1];
}
console.log(result(m,n,arr));