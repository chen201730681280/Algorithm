function printMatrix(matrix)
{
    var rows=matrix.length;
    var cols=matrix[0].length;
    var top=0;
    var bottom=rows-1;
    var left=0;
    var right=cols-1;
    var result=[];
    while(top<=bottom && left<=right){
        for(let i=left;i<=right;i++){
            result.push(matrix[top][i]);
        }
        top++;
        if(top<=bottom){
            for(let k=top;k<=bottom;k++){
                result.push(matrix[k][right]);
            }
        }
        right--;
        if(left<=right && top<=bottom){
            for(let m=right;m>=left;m--){
                result.push(matrix[bottom][m]);
            }
        }
        bottom--;
        if(left<=right && top<=bottom){
            for(let j=bottom;j>=top;j--){
                result.push(matrix[j][left]);
            }
        }
        left++;
    }
    return result;
}