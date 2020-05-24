class Solution {
public:
    int jumpFloorII(int number) {
    if(number==1) return 1;
    if(number==2) return 2;
    //跳到n格时f(n)=f(1)+f(2)+...+f(n-1)+1
    //跳到n-1格时，f(n-1)=f(1)+....+f(n-2)+1
    //相减f(n)=f(n-1)*2
     return jumpFloorII(number-1)*2;
    }
};