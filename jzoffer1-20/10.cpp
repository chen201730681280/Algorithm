class Solution {
public:
    int rectCover(int number) {
        //n=1,则是1
        //n=2，是2
        if(number==1) return 1;
        if(number==2) return 2;
        //当有n时，第一次放2*1，则剩余f(n-1)
        //第一次放2*2.则剩余f(n-2)
        //return rectCover(number-1)+rectCover(number-2);
        int a=1;
        int b=2;
        int c=0;
        for(int i=3;i<=number;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;

    }
};