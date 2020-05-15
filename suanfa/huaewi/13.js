// var arr=readline().split(' ');
var a='I am a boy';
var arr=a.split(' ');
var ans=arr[arr.length-1];

for(let i=arr.length-2;i>=0;i--){
    ans=ans+' '+arr[i];
}
console.log(ans);
