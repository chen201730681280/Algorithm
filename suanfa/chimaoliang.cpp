#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    // 小招喵喜欢吃喵粮。这里有 N 堆喵粮，第 i 堆中有 p[i] 粒喵粮。喵主人离开了，将在 H 小时后回来。
    // 小招喵可以决定她吃喵粮的速度 K （单位：粒/小时）。每个小时，她将会选择一堆喵粮，从中吃掉 K 粒。如果这堆喵粮少于 K 粒，她将吃掉这堆的所有喵粮，然后这一小时内不会再吃更多的喵粮。
    // 小招喵喜欢慢慢吃，但仍然想在喵主人回来前吃掉所有的喵粮。
    // 返回她可以在 H 小时内吃掉所有喵粮的最小速度 K（K 为整数）。
    //3 6 7 11
    //8
    //4
    int a = 0;
    vector<int> nums;int n=5;
    while(n>0){
        cin>>a;
        nums.push_back(a);
        n--;
    }
    // while (cin >> a)
    // {
    //     nums.push_back(a);
    // }
    int h = nums[nums.size() - 1];
    nums.pop_back();
    sort(nums.begin(),nums.end());
    //每堆的平均次数27/8->3.
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
    }
    int m=sum/h;
    int count=0;
    vector<int> temp=nums;
    int flag=0;
    for(int i=m;i<=nums[nums.size()-1];i++){
        count=0;
        temp=nums;
        for(int j=0;j<nums.size();j++){
            if(temp[j]<=i){
                count++;
               
            }else{
                temp[j]=temp[j]-i;
                j--;
                count++;
            }
        }
        if(count<=h){
            flag=i;
            break;
        }
        
    }
    cout<<flag<<endl;
    // return 0;
    system("pause");
}