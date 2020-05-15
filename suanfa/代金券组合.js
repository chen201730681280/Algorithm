// 首先输入一个金额
// 然后有几种代金券
// 然后就是代金券的大小
// while(true){
//     // 价格
//     var price=parseInt(readline());
//     if(price==0) break;
//     var lines=readline();
//     var lineArr=lines.split(' ').map(e=>e*1);
//     var type=lineArr[0];
//     var money=lineArr.slice(1);
//     console.log(getResult(price,type,money));
// }
function getResult(price,type,money){
    // 要维护一个一维数组
    var dp=[];
    // 把这个数组的第一个设为0
    dp[0]=0;
    // 给每个金额找出最小张数
    for(let i=1;i<=price;i++){
        var arr=[];
        for(let j=0;j<money.length;j++){
            if(i>=money[j]){
                arr.push(dp[i-money[j]]+1);
            }
        }
        dp[i]=Math.min(...arr);
       
    }
    if(dp[price]){
        return dp[price];
    }else{
        return "impossible";
    }
}
var price=62;
var type=3;
var money=[10,1,50];
console.log(getResult(price,type,money));
