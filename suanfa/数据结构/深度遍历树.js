var obj={
    values:1,
    left:{
        values:2,
        left:{
            values:5,
            right:{
                values:4
            }
        },
        right:{
            values:9,
            right:{
                values:10,
                left:{
                    values:99
                }
                
            }
        }

    }
}
var re=[];
function tree(obj,re){
    re.push(obj.values);
    if(obj.left){
        tree(obj.left,re);
    }
    if(obj.right){
        tree(obj.right,re)
    }
    return re;
}
console.log(tree(obj,re));
