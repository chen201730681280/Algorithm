#include<iostream>
#include<string>
using namespace std;

int main(){
    int day=0;
    cin>>day;
    string time;
    cin>>time;
    int minute=0;
    cin>>minute;
    //先把之前转为小时
    int h=minute/60;
    int m=minute%60;
    int curh=(0+time[0])*10+time[1];
    int curm=(0+time[3]+0)*10+time[4];
    cout<<curh<<curm;
    system("pause");
}