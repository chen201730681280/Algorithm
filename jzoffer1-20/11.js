function NumberOf1(n)
{
  
         var count=0;
         while(n!=0){
            count++;
             //借位，每乘一次就会消掉一个1
             n=n&(n-1);
         }
         
     return count;
}

console.log(NumberOf1(9));//2
console.log(NumberOf1(-9));//31
