// var a=readline();
// var b=readline();
var a = 'abc';
var b = '123456789';
function chuli(a) {
    if (a == '') {
        return;
    }
    if (a.length == 8) {
        console.log(a);
    }
    if (a.length < 8) {
        while (a.length < 8) {
            a = a + '0';
        }
        console.log(a);
    }
    while (a.length > 8) {
        console.log(a.slice(0, 8));
        a = a.slice(8);
        if (a.length == 8) {
            console.log(a);
        }
        if (a.length < 8) {
            while (a.length < 8) {
                a = a + '0';
               
            }
            console.log(a);
        }

    }
}
chuli(a);
chuli(b);