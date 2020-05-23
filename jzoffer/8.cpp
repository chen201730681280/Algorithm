class Solution {
public:
    int jumpFloor(int number) {
        if(number==1) return 1;
        if(number==2) return 2;
        //跳n个台阶的话，从n-1或者n-2台阶开始跳
        //f(n)=f(n-1)+f(n-2)
        //所以是斐波那契
        int a=1;
        int b=2;
        int c=0;
        for(int i=2;i<number;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};