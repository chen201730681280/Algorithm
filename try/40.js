function FindNumsAppearOnce(array)
{
    // write code here
    // return list, 比如[a,b]，其中ab是出现一次的两个数字
        array.sort(sortNumber);
        console.log(array);
           var a=[];
            let id=0;
        for(let i=0;i<array.length;i=i+2){
            console.log("i="+i);
            console.log("array[i]="+array[i]);
            if(array[i]!=array[i+1]){
                a.push(array[i])
                i--;
                id++;
            }
            if(id==2) break;
        }
       return a;
        
}
function sortNumber(a,b){
    return a-b;
}
var array=[1,2,2,1,4,5,3,5,4,6];
var m=FindNumsAppearOnce(array);
console.log(m);