// var arr=readline().split(',').map(Number);
// var r=arr[0];
// var n=arr[1];
var r=39;
var n=3;
function zhuan(r,n){
    // 将r转换为n进制
    var mod=0;
    var jinzhi='';
    while(r>0){
        mod=parseInt(r%n);
        // 将进制翻转1110变成0111
        jinzhi=jinzhi+mod.toString();
        r=parseInt(r/n);
    }
    var ans=[];
    var flag=0;
    for(let i=0;i<jinzhi.length;i++){
        if(jinzhi[i]==1){
            ans.push(i);
        }
        if(jinzhi[i]>1){
            flag=1;
            ans=[];
            break;
        }
    }
   return ans;

}
console.log(zhuan(r,n));