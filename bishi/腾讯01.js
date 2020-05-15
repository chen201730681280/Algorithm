// var num=readline();
// while(num--){
//     let arr1=readline().split(' ');
//     let person=arr1[0];
//     let k=arr1[1];
//     let eat=readline().split(' ');
//     let food=readline().split(' ');
//     eat.sort((a,b)=>a-b);
//     food.sort((a,b)=>b-a);
//     for(let i=0;i<person;i++){
//         if(k>=eat[i]){
//             eat[i]=0;
//             k=k-eat[i];
//         }else{
//             eat[i]=eat[i]-k;
//             k=0;
//             break;
//         }
//     }
//     let sum=0;
//     for(let j=0;j<person;j++){
//         sum=eat[j]*food[j]+sum;
//     }
//     console.log(sum);

// }
// var a=[2,3,1];
// a.sort((a,b)=>a-b);
// console.log(a);


// var num=readline();
// while(num--){
//     var queue=[];
//     let n=readline();
//     while(n--){
//         let arr=readline().split(' ');
//         if(arr[0]=='PUSH'){
//             queue.push(arr[1]);
//         }else if(arr[0]=='TOP'){
//             if(queue.length==0){
//                 console.log(-1);
//             }else{
//                 console.log(queue[0]);
//             }
//         }else if(arr[0]=='POP'){
//             if(queue.length==0) console.log(-1);
//             else queue.shift();
//         }else if(arr[0]=='SIZE'){
//             console.log(queue.length);
//         }else if(arr[0]=='CLEAR'){
//             queue=[];
//         }
//     }
// }

// var a=['ab','bc'];
// a.reverse();
// console.log(a);
// var a=[];
// a.push('a');
// a.push('b');
// console.log(a);
// var product=readline().split('/');
// var productname=[];
// productname.push(product[0]);
// for(let i=1;i<product.length-1;i++){
//     let temp=product[i].split(' ');
//     productname.push(temp[temp.length-1]);
// }
// var str='[';
// for(let i=0;i<productname.length-1;i++){
//     str=str+'"'+productname[i]+'",';
// }
// str=str+'"'+productname[productname.length-1]+'"]'
// console.log(str);

// var a=[1,2,3];
// Math.max(a);
// function menu() {
//     var a=document.getElementById('jsContent');
//     var b=document.getElementById('jsMenu');
//     var c=document.createElement('ul');
//     b.appendChild(c);
//     var arr=a.children;
//     for(let i=0;i<arr.length;i++){
//     let tag=arr[i].nodeName;
//     let context=arr[i].nodeValue;
//     if(tag=='h1'||tag=='h2'||tag=='h3'||tag=='h4'||tag=='h5'||tag=='h6'){
        
//             let d=document.createElement('li');
//             c.appendChild(d);
//             let a_link=document.createElement('a');
//             a_link.setAttribute('class','h1');
//             a_link.setAttribute('href','#');
//             d.appendChild(a_link);
//             a_link.appendChild(context);
//     }
// }
// }

// var num=readline();
// while(num--){
//     let arr1=readline().split(' ');
//     let person=arr1[0];//人数
//     let k=arr1[1];//k值
//     let eat=readline().split(' ');
//     let food=readline().split(' ');
//     eat.sort((a,b)=>a-b);
//     food.sort((a,b)=>b-a);
//     let real=[];
//     for(let i=0;i<person;i++){
//         real[i]=eat[i]*food[i];
//     }
//     for(let j=0;j<k;j++){
//         let max=0;
//         let flag=0;
//         for(let m=0;m<person;m++){
//             if(real[m]>max){
//                 max=real[m];
//                 flag=m;
//             }
//         }
//         real[flag]=real[flag]-food[flag];
//         eat[flag]=eat[flag]-1;
//     }
//     let max1=0;
//     for(let i=0;i<person;i++){
//         if(real[i]>max1) max1=real[i];
//     }
//     console.log(max1);
// }

// var a=[1,2,3];
// console.log(Math.max(a));
// var a=0;
// if(true){
//     a=1;
//     function a(){ let b=1;}
//     console.log(a);
//     a=21;
//     console.log("里面",a);
// }
// console.log(a);

// console.log(fn);
// var fn=0;
// if(true){
//     fn=1;
//     function fn(){var b=1};
//     fn=3;
// }
// console.log(fn);
// console.log(a)
var a=0;

if(true){ 
    function a(){}
    a=1;
    a=21;
    console.log("里面",a);
}
console.log(a);
