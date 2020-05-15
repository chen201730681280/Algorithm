
var pRoot=new TreeNode(1);
var p1=new TreeNode(3);
var p2=new TreeNode(5);
var p4=new TreeNode(5);
var p3=new TreeNode(6);
pRoot.left=p1;
p1.right=p2;
p2.left=p3;
pRoot.right=p4;


function TreeNode(x) {
    this.val = x;
    this.left = null;
    this.right = null;
} 
function IsBalanced_Solution(pRoot)
{
    if(pRoot==null) return true;
        let leftDepth=getDepth(pRoot.left);
        let rightDepth=getDepth(pRoot.right);
        console.log("left="+leftDepth);
        console.log("right="+rightDepth);
        if(leftDepth>rightDepth+1 || rightDepth>leftDepth+1){
            return false;
        }else{
            return IsBalanced_Solution(pRoot.left) && IsBalanced_Solution(pRoot.right);
        }
}
function getDepth( pRoot){
        if(pRoot==null) return 0;
        let leftDepth=getDepth(pRoot.left);
        let rightDepth=getDepth(pRoot.right);
        let b=leftDepth>rightDepth?leftDepth+1:rightDepth+1
        console.log(b);
        return b;
    }

    var a=IsBalanced_Solution(pRoot);
    console.log(a);