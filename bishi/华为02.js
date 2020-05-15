var a=readline().split(' ');
var b=a[0];
var c=a[1].split(']');
// var b='read';
// var c=['read[addr=0x17,mask=0xff,val=0x7',',read_his[addr=0xff,mask=0xff,val=0x1',',read[addr=0xf0,mask=0xff,val=0x80'];
for(let i=1;i<c.length;i++){
    c[i]=c[i].slice(1);
}

var m=[];
for(let i=0;i<c.length;i++){
    if(c[i].slice(0,b.length)==b &&c[i][b.length]=='['){
        m.push(c[i].slice(b.length+1));
    }
}
var a=[];
var q=[];
for(let i=0;i<m.length;i++){
    q=[];
    a=m[i].split(',');
    q.push(a[0].slice(5));
    q.push(a[1].slice(5));
    q.push(a[2].slice(4));
    console.log(q.toString().split(',').join(' '));
}