function maxInWindows(num, size)
{
    // write code here
    let max=[];
    if(size==0||num.length==0||size>num.length) return max;
    for(let i=0;i<num.length-size+1;i++){
        let m=num[i];
        for(let j=i+1;j<i+size;j++){
            if(num[j]>m) m=num[j];
        }
        max.push(m);
    }
    return max;
}