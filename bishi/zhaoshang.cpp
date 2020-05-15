#include<iostream>
#include<string>
#include<vector>
using namespace std;

// 给一个字符串，判断这个字符串是不是镜像回文字符串
// 如果和倒置的字符串y的每一位都是镜像对应，那么就是镜像
// 1--1
// 2--5
// 3---8
// 4---7
// 6---9
// 是就输出yes，不是就输出no
int main(){
    int n=0;
    cin>>n;
    string a;
    vector<string> res;
    for(int i=0;i<n;i++){
        cin>>a;
        res.push_back(a);
    }
   for(int i=0;i<n;i++){
       string nums=res[i];
       int len=nums.size();
       int flag=1;
       int m=0;
       if(len==1) 
       {
           if(nums[0]=='1') m=1;
           else{
               flag=0;
           }
       }
      else if(len%2!=0){
           int k=len/2;
           if(nums[k]!='1'){
               flag=0;
           }
       }
       for(int j=0;j<len/2;j++){
           if(len==1) break;
           if(nums[j]=='1' && nums[len-j-1]=='1'){
               continue;
           }else if(nums[j]=='2' && nums[len-j-1]=='5'){
               continue;
           }else if(nums[j]=='3' && nums[len-j-1]=='8'){
               continue;
           }else if(nums[j]=='4' && nums[len-j-1]=='7'){
               continue;
           }else if(nums[j]=='6' && nums[len-j-1]=='9'){
               continue;
           }else if(nums[j]=='5' && nums[len-j-1]=='2'){
               continue;
           }else if(nums[j]=='8' && nums[len-j-1]=='3'){
               continue;
           }else if(nums[j]=='7' && nums[len-j-1]=='4'){
               continue;
           }else if(nums[j]=='9' && nums[len-j-1]=='6'){
               continue;
           }else 
           {
               flag=0;
               break;
           } 
       }
    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

   }
    return 0;
}