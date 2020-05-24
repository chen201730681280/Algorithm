/* function TreeNode(x) {
    this.val = x;
    this.left = null;
    this.right = null;
} */
function HasSubtree(pRoot1, pRoot2)
{
   if(!pRoot1 || !pRoot2) return false;
    if(pRoot1.val==pRoot2.val){
        if(isSubTree(pRoot1,pRoot2)){
            return true;
        }
    }
    if(HasSubtree(pRoot1.left,pRoot2)){
         return true;
    }
    if(HasSubtree(pRoot1.right,pRoot2)){
        return true; 
    }
    return false;
}
function isSubTree(pRoota,pRootb){
    if(!pRootb) return true;
    if(!pRoota) return false;
    if(pRoota.val==pRootb.val){
        if(isSubTree(pRoota.left,pRootb.left) && isSubTree(pRoota.right,pRootb.right)){
            return true;
        }
    }
    return false;
    
}
/* function TreeNode(x) {
    this.val = x;
    this.left = null;
    this.right = null;
} */
function HasSubtree(pRoot1, pRoot2)
{
    // write code here
    if(pRoot1==null) return false;
    if(pRoot2==null) return false;
    if(pRoot1.val==pRoot2.val)
    {
        if(isSubTree(pRoot1,pRoot2)) return true;
    }
    
      if(HasSubtree(pRoot1.left,pRoot2)) return true;
    
    
        if(HasSubtree(pRoot1.right,pRoot2)) 
        {
    return true;
        }
    return false;
}

function isSubTree(p1,p2){
    if(p2==null) return true;
    if(p1==null) return false;
    if(p1.val==p2.val){
        if(isSubTree(p1.left,p2.left) && isSubTree(p1.right , p2.right)) return true;
    }
    return false;
}