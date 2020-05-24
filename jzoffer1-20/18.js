/* function TreeNode(x) {
    this.val = x;
    this.left = null;
    this.right = null;
} */
function Mirror(root)
{
    // write code here
    if(!root) return;
    var p1;
    p1=root.left;
    root.left=root.right;
    root.right=p1;
    Mirror(root.left);
    Mirror(root.right);
}