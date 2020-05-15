var day=parseInt(readline());
var times=readline().split(':').map(Number);
var h=times[0];
var min=times[1];
var bef=parseInt(readline());
function gotime(day,h,min,bef){
    var h1=parseInt(bef/60);
    var min1=parseInt(bef%60);
    var curmin=0;
    var curh=0;
    if(min-min1>=0) curmin=min-min1;
    else{
        curmin=60+min-min1;
        h=h-1;
    }
    if(h-h1>=0) curh=h-h1;
    else{
        curh=h+24-h1;
        day--;
        while(curh<0){
            curh=curh+24;
            day--;
        }
    }
    if(day<1) day=7; 
    console.log(day);
    var a='';
    var b='';
    if(curh<10){
        a='0'+curh;
    }
    if(curmin<10){
        b='0'+curmin;
    }
    console.log(a+':'+b);
}
gotime(day,h,min,bef);