// var arr=['Tom','Lily','Tom','Lucy','Lucy','Jack'];
// var arr=['Tom','Lily','Tom','Lucy','Lucy','Tom','Jack'];
// var arr=readline().split(',');
var arr=['Aaa'];
var len=arr.length;
var a=new RegExp(/A-Za-z*/g);
console.log(a.test(arr[0]));
for(let i=0;i<len;i++){
    if(arr[i].match(/^|A-Z| a-z/g)){
        continue;
    }else{
        console.log('error.0001');
    }
}
var b=[];
var c=[];
var id=0;
arr.sort();
for(let i=0;i<len;i++){
    if(b.indexOf(arr[i])==-1){
        b.push(arr[i]);
        c.push(1);
    }else{
        c[c.length-1]++;
    }
}

let max=0;
var d=[];
for(let i=0;i<c.length;i++){
    if(c[i]>max){
        max=c[i];
    }
}
for(let i=0;i<c.length;i++){
    if(c[i]==max){
        d.push(b[i]);
    }
}
d.sort();
if(d.length==1){
    console.log(d[0]);
}else{
console.log(d[0]);
}

