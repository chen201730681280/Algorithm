var obj2=(function(){
    var inner='1';
    return{
        inner:'2',
        say:function(){
            console.log(inner);
            console.log(this.inner);
        }
    }
})();
obj2.say();


var arr = [5, 4, 8, 1, 3, 7, 0, 9, 2, 6];

function shellSort(arr) {

    var len = arr.length;
    var tmp = undefined;
    var gap = Math.floor(len / 2);

    while (gap >= 1) {
        for (var i = 0; i < len; i++) {
            for (var j = i; j >= gap; j = j - gap) {
                if (arr[j] < arr[j - gap]) {
                    tmp = arr[j];
                    arr[j] = arr[j - gap];
                    arr[j - gap] = tmp;
                }
            }
        }
        gap = Math.floor(gap / 2);
    }

    console.log(arr);
    return arr;
}

shellSort(arr);
