// var str=readline();
// var b=readline();
var str='a2as';
var b='a';
function geshu(str,b){
    let len=str.length;
    let count=0;
    for(let i=0;i<len;i++){
        if(str[i].match(//i)){
            count++;
        }
    }
    return count;
}
console.log(geshu(str,b));