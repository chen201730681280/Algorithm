var arr = [5,4,8,1,3,7,0,9,2,6];
var len=arr.length;
var qsort=function(arr){
    var len=arr.length;
    if(len<2) return arr;
    // 默认第一个为基准数
    var basic=arr[0];
    var left=[];
    var right=[];

    for(var j=1;j<len;j++){
        if(arr[j]<basic){
            left.push(arr[j]);
        }else{
            right.push(arr[j]);
        }
    }
    return qsort(left).concat(basic,qsort(right));
}
console.log(qsort(arr));