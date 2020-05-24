/* function TreeNode(x) {
    this.val = x;
    this.left = null;
    this.right = null;
} */
//用于记录暂时的路径
var path=[];
//用于记录完整的路径
var arr=[];
function FindPath(root, expectNumber)
{
    if(!root) return arr;
    path.push(root.val);
    if((root.val==expectNumber) && root.left==null && root.right==null){
        arr.push(path.slice());
    }
    FindPath(root.left,expectNumber-root.val);
    FindPath(root.right,expectNumber-root.val);
    if(path.length!=0){
       path.pop();
    }
    return arr;
}


