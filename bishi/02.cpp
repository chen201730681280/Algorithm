#include<iostream>
#include<string>
#include<vector>
using namespace std;
// 给一个数字的字符串，可以在里面添加加号或者减号
// 使最后的结果等于k
// 想知道最后满足的方案有多少种
// 2   1=<T<=100
//21 1 len(1,12) k(1,10的4次方)
//12345 3
//输出1 1
int main(){
    int n=0;
    cin>>n;
    vector<string> b;
    string a;
    int k=0;
    for(int i=0;i<n;i++){
        cin>>a>>k;
        vector<int> res;
        for(int j=0;j<a.size();j++){
            res.push_back(a[j]);
            cout<<res[j];
        }
    }
    system("pause");
}