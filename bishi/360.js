var arr=readline().split(' ').map(Number);
var n=arr[0];
var m=arr[1];
var person=readline().split(' ').map(Number);
var cofwin=0;
var coflian=0;
for(let i=0;i<person.length-1;i++){
    if(person[i]>=person[i+1]){
        cofwin++;
        person.splice(i+1,1);
        person.push(person[i+1]);
        if(cofwin>=m){
            break;
        }
        i--;
    }else{
        cofwin=1;
        person.splice(i,1);
        person.push(person[i]);
    }
    coflian++;
}
console.log(coflian);
// var a=[1,2,3,4,5,6,7];

// console.log(a.shift());
// console.log(a);
// a.splice(1,1);
// console.log(a);
