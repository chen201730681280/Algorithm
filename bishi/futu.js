var x=parseInt(readline());
function feibo(x){
    var a=0;
    var b=1;
    var c=0;
    for(let i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        if(b>n){
            break;
        }
    }
    let left=n-a;
    let right=b-n;
    if(left<right){
        return left;
    }else{
        return right;
    }
}
console.log(feibo(n));