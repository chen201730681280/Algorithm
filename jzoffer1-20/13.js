function reOrderArray(array)
{
    var jishu=[];
    var oushu=[];
    for(let i=0;i<array.length;i++){
        if(array[i]%2==0){
            oushu.push(array[i]);
        }else{
            jishu.push(array[i]);
        }
    }
    return jishu.concat(oushu);
    
}