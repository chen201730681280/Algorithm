function cutRope(number)
{
      
        //选择3，没有3则2
        if(number==0) return 0;
        if(number==1) return 1;
        if(number==2) return 1;
        if(number==3) return 2;
        let n=parseInt(number%3);
        let k=parseInt(number/3);
        if(n==0) return Math.pow(3,k);
        if(n==1) return Math.pow(3,k-1)*4;
        if(n==2) return Math.pow(3,k)*2;
    
}