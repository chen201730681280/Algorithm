// var arr = readline().split(' ').map(Number);
// var n = arr[0];
// var shuzu = [];
// var temp = [];
// for (let i = 0; i < n; i++) {
//     temp = readline().split(' ').map(Number);
//     shuzu.push(temp);
// }
// var arr=[5,2,3,1,0,0];
// var n=5;
// var shuzu=[[1,20,2,3],[2,30,3,4,5],[3,50,4],[4,60],[5,80]];
// let count = 0;
// let max = 0;
// let flag = 0;
// for (let i = 0; i < n; i++) {
//     var a = digui(i + 1);
//     if (typeof (a) == 'string') {
//         flag = 1;
//         console.log(a);
//         break;
//     } else {
//         count = a;
//         if (count > max) {
//             max = count;
//         }
//     }
// }
// if (flag == 0) {
//     console.log(max);
// }

// function digui(a) {
//     let count = 0;
//     let max = 0;
//     let flag = 0;
//     if (shuzu[a - 1].length != arr[a] + 2) {
//         return 'NA';
//     } else if (shuzu[a - 1].length == 2) {
//         return shuzu[a - 1][1];
//     } else
//      {
//         for (let i = 0; i < arr[a]; i++) {
//                 var k = digui(shuzu[a - 1][2 + i]);
//                 if (typeof (k) == 'string') {
//                     flag = 1;
//                     return k;
//                 } else {
//                     count = shuzu[a - 1][1] + digui(shuzu[a - 1][2 + i]);
//                     if (count > max) {
//                         max = count;
//                     }
//                 }
//         }
//         if (flag == 0) {
//             return max;
//         }
//     }
// }
var a=new RegExp(/^[A-Z][a-z]*$/);
var b='Jack';
console.log(a.test(b));