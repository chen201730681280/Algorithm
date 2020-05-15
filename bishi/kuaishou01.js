var a=readline();
 function ans(a){
    var zuo=[];
    var you=[];
    // 记录左右括号的索引
    for(let i=0;i<a.length;i++){
        if(a[i]=='('){
            zuo.push(i);
        }
        if(a[i]==')'){
            you.push(i);
        }
    }
 }
 ans(a);