// 使用了别的数组为媒介

// class Solution {
// public:
//     void reOrderArray(vector<int> &array) {
//         if(array.size()==0) return;
//         vector<int> left;
//         vector<int> right;
//         for(int i=0;i<array.size();i++){
//             if(array[i]%2==0){
//                 right.push_back(array[i]);
//             }else{
//                 left.push_back(array[i]);
//             }
//         }
//         for(int j=0;j<right.size();j++){
//             left.push_back(right[j]);
//         }
//         array=left;
//     }
// };


// 如果要在原数组上面改

/**
 * 1.要想保证原有次序，则只能顺次移动或相邻交换。
 * 2.i从左向右遍历，找到第一个偶数。
 * 3.j从i+1开始向后找，直到找到第一个奇数。
 * 4.将[i,...,j-1]的元素整体后移一位，最后将找到的奇数放入i位置，然后i++。
 * 5.終止條件：j向後遍歷查找失敗。
 */
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        if(array.size()==0) return;
        int i=0;
        int j=i;
        while(i!=array.size()){
            //找偶数
            while(array[i]%2!=0 && i<array.size()){
                i++;
            }
            j=i;
            //找奇数
            while(array[j]%2==0){
                j++;
            }
            if(j<array.size()){
            int temp=array[j];
            for(int m=j;m>i;m--){
                array[m]=array[m-1];
            }
            array[i]=temp;
            }else{
                break;
            }
            
        }
    }
};