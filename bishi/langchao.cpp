#include <iostream>
#include <vector>
using namespace std;

// 5 2 4 3 1

// 0 1 1 2 4
// 原本的做法：左移4
// 右移4
// 右移一个4，再右移一个5，再左移一个1

// 第一行一个整数n，表示石头的个数。(1 <= n <= 100000) 第二行n个整数，表示从左往右石头的半径r1，r2，...，rn。(1 <= ri <= n)，且保证不存在两个不同的石头拥有相同的半径。

//   5
// 4 1 2 5 3  
// 0 1 1 0 2

// 2

int main()
{
    int n = 0;
    cin >> n;
    int a = 0;
    vector<int> res(n);
    if(n==1||n==0){
        cout<<'0'<<endl;
        return 0;
    } 
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        res[i]=a;
    }
    int count1=0;
    int countmax=0;
    for(int i=1;i<n;i++){
         count1=0;
         for(int j=i-1;j>=0;j--){
            if(res[i]<res[j]){
                count1++;
            }
        }
        if(count1>countmax){
            countmax=count1;
        }
    }
    cout<<countmax;
    system("pause");
    // int right = 0;
    // right = n - res[n - 1];
    
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (res[i] < res[n - 1])
    //         {
    //             right = right + res[i] - 1;
    //             break;
    //         }
    //     }
    
    // int left = 0;
    // left = res[0] - 1;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if (res[i] > res[0])
    //     {
    //         left = left + n - res[i];
    //         break;
    //     }
    // }
    // if (left < right)
    //     cout << left;
    // else
    // {
    //     cout << right;
    // }
}