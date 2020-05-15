function ReverseSentence(str)
{
    // write code here
    return  str.split(" ").reverse().join(" ");
    
}
var str="hello world";
var b=ReverseSentence(str);
console.log(b);