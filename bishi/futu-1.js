// var arr=readline().split(' ').map(Number);
// var m=arr[0];
// var n=arr[1];
var m=7;
var n=2;

function a(m,n){
    var c=m;
    var mod=0;
    var ans='';
    while(m>0){
        mod=parseInt(m%n);
        m=parseInt(m/n);
        // if(m<n){
        //     ans=mod.toString()+ans;
        //     console.log(ans);
        //     break;
        // }
        if(mod>9){
            switch (mod)
            {
            case 10:
                ans='A'+ans;
                break;
            case 11:
                ans='B'+ans;
                break;
            case 12:
                ans='C'+ans;
                break;
            case 13:
                ans='D'+ans;
                break;
            case 14:
                ans='E'+ans;
                break;
            case 15:
                ans='F'+ans;
                break;
            default:
                break;
            }
        }else{
             ans=mod.toString()+ans;
             console.log(ans);
        }
    }
    return ans;
}
console.log(a(m,n));