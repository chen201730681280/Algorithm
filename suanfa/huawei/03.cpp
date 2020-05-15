#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    set<int> res;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        res.insert(m);
    }
    // set<int>::iterator it;
    // it = res.begin();
    // while(it!=res.end()){
    //     cout<<*it<<endl;
    //     it++;
    // }
    cout<<*res.begin()<<endl;
    system("pause");
}
