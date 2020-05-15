// var a=[];
// a.push(1);
// a.push(2);
// a.push(3);
// console.log(a);
// console.log(a.toString());
// console.log(a.toString().split(',').join(' ')+' ');
// const readline = require('readline');
// const rl = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
//   });


//  var a=readline();
// var a=2;
// function zhizi(a){
//     var b=[];
//     var d=a;
//     for(let c=2;c<Math.sqrt(a);c++){
//         while(d%c==0){
//             d=parseInt(d/c);
//             b.push(c);
//         }
//         if(d==1){
//             break;
//         }
//     }
//     console.log(b.toString().split(',').join(' ')+' ');

// }
// zhizi(a);
fun(2);
function fun(num) {
    let res = '';
    console.log(Math.sqrt(2));
for (let i = 2; i< Math.sqrt(num); i++) {
    while(num % i === 0) {
        res += i + ' ';
        num = num / i;
    }
}
if (num > 1) {
    res += num + ' ';
}
console.log(res);
}