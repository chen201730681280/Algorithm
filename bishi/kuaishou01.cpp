#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    string a;
    cin >> a;
    queue<int> b;
    int count = 0;
    int you = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '(')
        {
            b.push(i);
        }
        if (a[i] == ')')
        {
            if (b.size() == 0)
            {
                you++;
            }
            if (b.size() != 0)
            {
                b.pop();
                count++;
            }
        }
    }
    cout<<count<<' '<<b.size()<<' '<<you<<endl;
    return 0;
}