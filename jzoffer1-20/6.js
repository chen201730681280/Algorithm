function minNumberInRotateArray(rotateArray)
{
    // write code here
    return rotateArray.sort(Num)[0];
}

function Num(a,b){
    return a-b;
}