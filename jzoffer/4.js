// /* function TreeNode(x) {
//     this.val = x;
//     this.left = null;
//     this.right = null;
// } */

// //漏掉了判断pre的长度
// function reConstructBinaryTree(pre, vin)
// {
//      var result =null;
//      if (pre.length > 1) {
//     //前序遍历第一个为根元素
//     //中序遍历中根元素左边是左子树，右边是右子树
//     var root=pre[0];
//     //记录根元素在右子树的索引
//     let gen=0;
//     for(let i=0;i<pre.length;i++){
//         if(root==vin[i])
//             gen=i;
//     }
//     //删除前序遍历第一个数
//     pre.shift();
//     //存入左子树的内容
//     var left_vin=vin.slice(0,gen);
//     var left_pre=pre.slice(0,gen);
//     //var left_pre=pre.slice(0,left_vin.length);
//     var right_pre=pre.slice(gen);
//     //var right_pre=pre.slice(left_vin.length,pre.length);
//     var right_vin=vin.slice(gen+1,vin.length);
   
    
//     result={
//             val:root,
//             left:reConstructBinaryTree(left_pre,left_vin),
//             right:reConstructBinaryTree(right_pre,right_vin)
//         }
//      }else if(pre.length ===1){
//         result= {
//             val :pre[0],
//             left:null,
//             right:null
//         }
         
//      }
//     return result;
// }

function TreeNode(x) {
    this.val = x;
    this.left = null;
    this.right = null;
    
}
//成功
function reConstructBinaryTree(pre, vin)
{
    if(pre.length==0) return null;
    let root=new TreeNode(pre[0]);
    let leftVin=[];
    let rightVin=[];
    let leftPre=[];
    let rightPre=[];
    let flag=0;
    for(let i=0;i<vin.length;i++)
    {
        //用flag来判断是否到达了根结点
        if(flag==0 && vin[i]!=root.val){
            leftVin.push(vin[i]);
        }else if(vin[i]==root.val){
            flag=1;
        }else if(flag==1 && vin[i]!=root.val){
            rightVin.push(vin[i]);
        }
    }
    leftPre=pre.slice(1,leftVin.length+1);
    rightPre=pre.slice(leftVin.length+1);
    root.left=reConstructBinaryTree(leftPre, leftVin);
    root.right=reConstructBinaryTree(rightPre, rightVin);
    return root;
}

//成功版
// function reConstructBinaryTree(pre, vin)
// {
//     if(pre.length==0) return null;
//     let root=pre[0];
//     if(pre.length>1){
//         let leftVin=[];
//     let rightVin=[];
//     let leftPre=[];
//     let rightPre=[];
//     let flag=0;
//     let result={};
//     for(let i=0;i<vin.length;i++)
//     {
//         //用flag来判断是否到达了根结点
//         if(flag==0 && vin[i]!=root){
//             leftVin.push(vin[i]);
//         }else if(vin[i]==root){
//             flag=1;
//         }else if(flag==1 && vin[i]!=root){
//             rightVin.push(vin[i]);
//         }
//     }
//         leftPre=pre.slice(1,leftVin.length+1);
//         rightPre=pre.slice(leftVin.length+1);
//         return result={
//             val:pre[0],
//             left:reConstructBinaryTree(leftPre, leftVin),
//             right:reConstructBinaryTree(rightPre, rightVin)
//         }
//     }else{
//         return result={
//             val:pre[0],
//             left:null,
//             right:null
//         }
//     }
    
// }
let pre=[1,2,4,7,3,5,6,8];
let vin=[4,7,2,1,5,3,8,6];
console.log(reConstructBinaryTree(pre, vin));