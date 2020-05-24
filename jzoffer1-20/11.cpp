class Solution {
public:
     int  NumberOf1(int n) {
         int count=0;
         while(n!=0){
            count++;
             //借位，每乘一次就会消掉一个1
             n=n&(n-1);
         }
         return count;
     }
};