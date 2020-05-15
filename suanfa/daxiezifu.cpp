#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    while (cin >> s)
    {

        for (int i = 0; i < s.length(); i++)
            if (s[i] >= 'a' && s[i] <= 'z')
                cout << s[i];
        for (int i = 0; i < s.length(); i++)
            if (s[i] <= 'Z' && s[i] >= 'A')
                cout << s[i];
        cout << endl;
    }
    system("pause");
    // string a;

    // while (cin >> a)
    // {
    //     int count =0;
    //     for(int i=0;i<a.size();i++){
    //         if (a[i] > 'z'&& a[i]<='Z')
    //         {
    //             count++;
    //         }
    //     }
    //     int id=0;
    //     char temp;
    //     for (int i = a.size() - 1; i >= 0; i--)
    //     {
    //         //如果是大写字母
    //         if (a[i] > 'z'&& a[i]<='Z')
    //         {
    //             a[a.size()-1-id]=a[i];
    //             id++;

    //         }
    //         if(id>count)
    //         break;
    //     }
    // }
}