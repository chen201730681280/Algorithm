function jumpFloor(number)
{
    // write code here
    if(number==0) return 0;
    if(number==1) return 1;
        if(number==2) return 2;
        //跳n个台阶的话，从n-1或者n-2台阶开始跳
        //f(n)=f(n-1)+f(n-2)
        //所以是斐波那契
        let a=1;
        let b=2;
        let c=0;
        for(let i=3;i<=number;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
}