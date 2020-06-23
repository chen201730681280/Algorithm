class Solution {
public:
    int cutRope(int number) {
        //选择3，没有3则2
        if(number==0) return 0;
        if(number==1) return 1;
        if(number==2) return 1;
        if(number==3) return 2;
        int n=number%3;
        int k=number/3;
        if(n==0) return pow(3,k);
        if(n==1) return pow(3,k-1)*4;
        if(n==2) return pow(3,k)*2;
    }
};