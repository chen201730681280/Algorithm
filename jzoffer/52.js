
function match(s, pattern)
{
    var reg=new RegExp("^" + pattern + "$");
    return reg.test(s);
}

var a='aab';
console.log(match(a,'a.b'));
var a='aab';
console.log(match(a,'a*b'));