function VerifySquenceOfBST(sequence)
{
    if(sequence.length==0) return false;
    return judge(sequence,0,sequence.length-1);
}

function judge(a,l,r){
    if(l>=r) return true;
    var index=r;
    while(a[index-1]>a[r] && i>l){
        index--;
    }
    for(let j=index-1;j>=l;j--){
        if(a[j]>a[r]) return false;
    }
    return ((judge(a,l,i-1))&&(judge(a,i,r-1)));
}