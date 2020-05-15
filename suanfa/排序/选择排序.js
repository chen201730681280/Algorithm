var arr = [5,4,8,1,3,7,0,9,2,6];
var len=arr.length;
var min=null;
var temp=null;
// 选择排序
for(var j=0;j<len-1;j++){
    min=j;
    for(var i=j+1;i<len;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    temp=arr[j];
    arr[j]=arr[min];
    arr[min]=temp;
}
console.log(arr);