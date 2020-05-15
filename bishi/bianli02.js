var a=read_line();
var arr=a.split(',').map(Number);
function che(arr){
    if(arr.length==0) return 0;
    if(arr.length==1 &&arr[0]>=1) return 0;
    if(arr.length==1 && arr[1]<1) return -1;
    var dp=[];
    dp[0]=0;
    for(let i=1;i<arr.length;i++){
        for(let j=0;j<i;j++){
            if(arr[j]-(i-j)>=0){
                dp[i]=dp[j]+1;
                break;
            }
        }
    }
    if(dp[arr.length]){
         return dp[arr.length-1];
    }else{
        return -1;
    }
   
}
console.log(che(arr));