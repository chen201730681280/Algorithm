var a=read_line();
var arr=a.split(',').map(Number);
function zixulie(arr){
    if(arr.length==0) return 0;
    var sum=arr[0];
    var a=0;
    var sum1=0;
    for(let i=1;i<arr.length;i++){
        if(arr[i]>=arr[i]+sum){
            sum=arr[i];
        }else{
            sum=sum+arr[i];
        }
        if(sum>sum1) sum1=sum;
    }
    return sum1;

}
console.log(zixulie(arr));