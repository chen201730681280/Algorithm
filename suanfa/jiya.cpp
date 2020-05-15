#include<iostream>
#include<string>
using namespace std;


int main(){
    


    // 农场有n只鸡鸭排为一个队伍，鸡用“C”表示，鸭用“D”表示。
    // 当鸡鸭挨着时会产生矛盾。需要对所排的队伍进行调整，使鸡鸭各在一边。
    // 每次调整只能让相邻的鸡和鸭交换位置，现在需要尽快完成队伍调整，
    // 你需要计算出最少需要调整多少次可以让上述情况最少。
    // 例如：CCDCC->CCCDC->CCCCD这样就能使之前的两处鸡鸭相邻变为一处鸡鸭相邻，需要调整队形两次。

    // 思路：其实只有两种情况
    //一是c全在左边，二是c全在右边
    // 这两种情况下无论是移动C还是移动D都是一样的
    string s;
    cin>>s;
    int len=s.size();
    // 记录如果将所有的c移到左边需要移动的次数
    int left=0;
    int right=0;
    // 记录c的个数
    int count=0;
    for(int i=0;i<len;i++){
        if(s[i]=='C'){
            left+=(i-count);
            count++;
        }
    }
    count=len-1;
    for(int i=len-1;i>=0;i--){
        if(s[i]=='C'){
            right+=(count-i);
            count--;
        }
    }
    int res=right>left?left:right;
    cout<<res;
    // return 0;










    // cin>>s;
    // int len = s.size();
    // int left=0;
    // int right=0;
    // int count=0;
    // for(int i=0;i<len;i++){
    //     if(s[i]=='C'){
    //         left+=(i-count);
    //         count++;
    //     }
    // }
    // count=len-1;
    // for(int i=len-1;i>=0;i--){
    //     if(s[i]=='C'){
    //         right+=(count-i);
    //         count--;
    //     }
    // }
    // int ans=right<left?right:left;
    // cout<<ans;
    system("pause");
}