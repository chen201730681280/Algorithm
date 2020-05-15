var n=read_line();
var res=read_line().split(' ').map(Number);
function a(n,arr){
    var count1=0;
    var countmax=0;
    for(let i=1;i<n;i++){
         count1=0;
         for(let j=i-1;j>=0;j--){
            if(res[i]<res[j]){
                count1++;
            }
        }
        if(count1>countmax){
            countmax=count1;
        }
    }
    return countmax;
}
console.log(a(n,arr));