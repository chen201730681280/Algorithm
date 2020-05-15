#include<iostream>
#include<vector>
using namespace std;

int main(){
    // 给定一个正整数数组，它的第 i 个元素是比特币第 i 天的价格。
    // 如果你最多只允许完成一笔交易（即买入和卖出一次），设计一个算法来计算你所能获取的最大利润。
    // 注意你不能在买入比特币前卖出。
    int a=0;
    vector<int> nums;
    while(cin>>a){
        nums.push_back(a);
    }
    //求最大相差
    int max=0;
    for(int i=1;i<nums.size();i++){
        for(int j=0;j<=i;j++){
            if(nums[i]-nums[j]>max){
                max=nums[i]-nums[j];
            }
        }
    }
    cout<<max<<endl;
    system("pause");
}