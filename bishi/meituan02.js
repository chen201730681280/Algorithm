// var n=parseInt(readline());
// var before=readline().split(' ').map(Number);
// var after=readline().split(' ').map(Number);
var n=5;
var before=[5,3,1,4,2];
var after=[2,4,5,1,3];

function a(n,bef,aft){
    var index=[];
    var index1=0;
    var count=0;
    for(let i=0;i<n;i++){
         index1=aft.indexOf(bef[i]);
         index.push(index1);
    }
    for(let i=n-1;i>0;i--){
        for(let j=i-1;j>=0;j--){
            if(index[i]<index[j]){
                count++;
                break;
            }
        }
    }
    return count;
}
console.log(a(n,before,after));