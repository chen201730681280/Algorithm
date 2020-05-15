// var n=readline();
// var a=[];
// var b=[];
// for(let i=0;i<n;i++){
//     var b=readline().split(' ').map(Number);
//     a.push(b);
// }
// for(let i=1;i<n;i++){
//     while(a[i][0]==a[i-1][0]){
//         a[i][1]=a[i][1]+a[i-1]+1;
//     }
//     b.push(a[i]);
// }

var a=[];
var b='12'.split('').map(Number);
a.push(b);
a.push(b);
console.log(a.toString());