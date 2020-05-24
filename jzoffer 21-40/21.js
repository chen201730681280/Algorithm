function IsPopOrder(pushV, popV)
{
    // write code here
    var a=[];
    var id=0;
    for(let i=0;i<popV.length;i++){
        while(a.length==0 || a[a.length-1]!=popV[i]){
          a.push(pushV[id]);
            id++;
        if(id>popV.length) return false;
        }
        a.pop();
    }
    if(a.length==0) return true;
    else return false;
}