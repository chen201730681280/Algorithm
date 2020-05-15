#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> yuang(n);
    int a = 0;
    vector<int> nandu(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        yuang[i] = a;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nandu[i] = a;
    }
    int yu = 0;
    int res = 0;
    cin >> yu;
    int count1 = 1;
    int count = 0;
    int flag = 0;
    int m=0;
    int l=0;
    sort(yuang.begin(), yuang.end());
    sort(nandu.begin(), nandu.end());
    if (yuang[0] < nandu[0])
        cout << '0' << endl;
    else if (yuang[0] >= nandu[0] && yuang[0] >= nandu[n - 1])
    {
        res = 1;
        while (n > 0)
        {
            res = res * n;
            n--;
        }
        cout << res % yu << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (yuang[i] > nandu[i])
            {
                count++;
            }
            else if (yuang[i] == nandu[i])
            {
                l++;
                if (count > 0)
                {
                    while (count > 0)
                    {
                        count1 = count1 * count;
                        count--;
                    }
                    res = res + count1;
                    count1 = 1;
                    count = 0;
                    if(i==n-1) m=1;
                }
            }
            else if (yuang[i] < nandu[i])
            {
                flag = 1;
                break;
            }
        }
        
            while (count > 0)
            {
                count1 = count1 * count;
                count--;
            }
            if(l==6 || count1>1 ||m==1){
            res = res + count1;}
        if (flag == 0)
        {
            cout << res % yu << endl;
        }
        else
        {
            cout << '0' << endl;
        }
    }

    system("pause");
}