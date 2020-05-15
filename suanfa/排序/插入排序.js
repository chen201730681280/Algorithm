var arr = [5,4,8,1,3,7,0,9,2,6];
var len = arr.length;
var cur = null;
var tmp = null;
for(var j=1;j<len;j++){
    cur=j-1;
    tmp=arr[j];
    while(cur>=0 && arr[cur]>tmp){
        arr[cur+1]=arr[cur];
        cur--;
    }
    arr[cur+1]=tmp;
}
console.log(arr);
// console.log([]==0);
// console.log({}.valueOf());
// console.log({}==0);
// console.log([].toString()==0);
// console.log({}.toString());