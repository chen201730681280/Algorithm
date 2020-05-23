//在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

function Find(target, array)
{
    // write code here
    if(array.length==0) return false;
    let row=array.length;
    let col=array[0].length;
    //从最后一行开始遍历，比其数小，向上遍历，如果比其数大，向右遍历
    for(let i=0;i<col;i++)
    {
        if(target>array[row-1][i])
        {
            continue;
        }else if(target==array[row-1][i]){
            return true;
        }else{
            if(row>1){
                for(let j=row-1;j>=0;j--){
                    if(target==array[j][i]) return true;
                }
            }
        }
    }
    return false;
}