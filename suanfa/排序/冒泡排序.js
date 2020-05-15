var arr = [5,4,8,1,3,7,0,9,2,6];
var len=arr.length;
var temp=null;
for(var j=0;j<len-1;j++){
    for(let i=0;i<len-1-j;i++){
        if(arr[i]>arr[i+1]){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    }
    
}
console.log(arr);