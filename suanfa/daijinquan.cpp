#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int price = 0;
    while (cin >> price)
    {
        if (price == 0)
            break;
        int n = 0;
        cin >> n;
        vector<int> money;
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            money.push_back(a);
        }
        vector<int> dp(price + 1);
        dp[0] = 0;
        int flag = 0;
        for (int i = 1; i <= price; i++)
        {
            vector<int> arr;
            for (int j = 0; j < money.size(); j++)
            {
                if (i >= money[j])
                {
                    int k = dp[i - money[j]] + 1;
                    arr.push_back(k);
                    flag = 1;
                }
            }
            sort(arr.begin(), arr.end());
            
            if (flag == 1)
            {
              
                dp[i] = arr[0];
            }
            else
            {
                dp[i] = 0;
            }
        }
        if (dp[price] != 0)
        {
            cout << dp[price] << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    system("pause");
}