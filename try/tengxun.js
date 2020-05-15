async function superBaby(name) {
  
    await function sleepFirst(time){
        setTimeout((time)=>{
        console.log("Start rating after "+time +"seconds")
        
      },time*1000)
    
    }
      this.name=name;
    console.log("I am "+name);
    
       //异步
    //eat是在异步之后输出
    
   await function sleep(time){
        setTimeout((time)=>{
          console.log("Start eating after "+ time+" seconds")
      },time*1000)
    }
    
    function eat(food){
        console.log("Eating "+food);
    
    }
}  

superBaby("tom").sleep(10);