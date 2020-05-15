var arr = [5, 4, 8, 1, 3, 7, 0, 9, 2, 6];
var merge_sort=function(arr){
    var len=arr.length;
    var mid=len/2;
    if (len < 2) return arr;
    return merge(merge_sort(arr.slice(0,parseInt(mid))),merge_sort(arr.slice(parseInt(mid))));
}
var merge=function(left,right){
    let final=[];
    if(left.length&&right.length){
        final.push(left[0]<right[0]?left.shift():right.shift());
    }
    return final.concat(left.concat(right));
}
console.log(merge_sort(arr));
























// var merge_sort = function (v) {
//     var len = v.length;
//     if (len < 2) return v;
//     var mid = len / 2;
//     return merge(merge_sort(v.slice(0, parseInt(mid))), merge_sort(v.slice(parseInt(mid))));
// }
// var merge = function (left, right) {
//     var final = [];
//     while (left.length && right.length) {
//         final.push(left[0] <= right[0] ? left.shift() : right.shift());
//     }
//     return final.concat(left.concat(right));
// }
// console.log(merge_sort(arr));