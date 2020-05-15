#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cout<<"a\a\"+"+"<<endl;
    int n = 0;
   while( cin >> n){
    vector<int> nums;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());

    int minNum = 0, maxNum = 0;

    //最大
    int l = 0, r = n - 1;
    int i = 1, j = 1; //i为最小数的个数，j为最大数的个数
    while (nums[l] == nums[l + 1])
    {
        i++;
        l++;
    }
    while (nums[r] == nums[r - 1])
    {
        j++;
        r--;
    }
    maxNum = i * j;

    //最小
    int minTemp = nums[1] - nums[0]; //最小差值
    int count = 1;
    for (int i = 2; i < n; i++)
    {
        if (nums[i] - nums[i - 1] < minTemp)
        {
            minTemp = nums[i] - nums[i - 1];
            count = 1;
        }
        else if (nums[i] - nums[i - 1] == minTemp)
            count++;
    }
    if (minTemp > 0)
        minNum = count;
    else
    {
        for (int i = 1; i < n; i++)
        {

            int j = i - 1;
            while (nums[i] == nums[j] && j >= 0)
            {
                j--;
                minNum++;
            }
        }
    }
    cout << minNum << ' ' << maxNum << endl;}

    // int count = 0;
    // int min = nums[n - 1] - nums[0];
    // for (int i = 0; i < n-1; i++) {
    //     if (nums[i + 1] - nums[i] < min) {
    //         count = 0;
    //         min = nums[i + 1] - nums[i];
    //         count++;
    //     }
    //     else if (nums[i + 1] - nums[i] == min) {
    //         count++;
    //     }
    // }
    // cout << count << " ";
    // int max = nums[n - 1] - nums[0];
    // int id = 0;
    // int count1 = 0;
    // for (int j = n - 1; j > 0; j--) {
    //     if (nums[j] - nums[id] == max) {
    //         count1++;
    //     }
    //     else {
    //         break;
    //     }
    // }
    // cout << count1 << endl;
    system("pause");
}