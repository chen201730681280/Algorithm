#include<iostream>
using namespace std;

int main(){
    //int a[128]={0},sum=0;
    char c;
    int count=0;
    while(cin >> c)
    {
        if(c>=0 && c<= 127){
            count++;
        }
    }
       // a[c] = 1;
    //for(int i = 0; i < 128; i++)
      //  if(a[i])
    //        sum++;
    cout << count;
   system("pause");
}