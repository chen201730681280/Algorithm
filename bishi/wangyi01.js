function add(num1, num2) {
    var len1 = num1.length;
    var len2 = num2.length;
    var res='';
    var a = num1.indexOf('.');
    var b = num2.indexOf('.');
    var index1=0;
    var index2=0;
    var add=0;
    var count=0;
    if (a == -1 && b == -1) {
        index1=len1-1;
        index2=len2-1;
    }else if(a==-1 &&b!=-1){
        index2=b-1;
        index1=len1-1;
        res=num2.slice(b);
    }else if(a!=-1 &&b==-1){
        index1=a-1;
        index2=len2-1;
        res=num1.slice(a);
    }else if(a!=-1 && b!=-1){
        index1=a-1;
        index2=b-1;
        // 小数部分的加法
        var num3=num1.slice(a+1);
        var num4=num2.slice(b+1);
        var len4=num3.length;
        var len5=num4.length;
        if(len4>len5){
            res=num3.slice(len5);
            len4=len5;
        }else if(len4<len5){
            res=num4.slice(len4);
            len5=len4;
        }
        while (len4>0) {
            add=parseInt(num3[len4-1])+parseInt(num4[len4-1])+count;
            count=0;
            if(add>=9){
                add=add-9;
                count=1;//进位
            }
            res=add.toString()+res;
            len4--;
        }
        res='.'+res;
    }
    // 整数部分的加法
    while (index1 >= 0 && index2 >= 0) {
        add=parseInt(num1[index1])+parseInt(num2[index2])+count;
        count=0;
        if(add>=9){
            add=add-9;
            count=1;//进位
        }
        res=add.toString()+res;
        index1--;
        index2--;
    }
    while(index1!=-1){
        add=parseInt(num1[index1])+count;
        if(add>=9){
            add=add-9;
            count=1;//进位
        }
        res=add.toString()+res;
        index1--;
        count=0;
    }
    while(index2!=-1){
        add=parseInt(num2[index2])+count;
        if(add>=9){
            add=add-9;
            count=1;//进位
        }
        res=add.toString()+res;
        index2--;
        count=0;
    }
    if(count==1)
    res='1'+res;
    return res;
}

var num1 = '5';
var num2 = '1115';
console.log(add(num1, num2));