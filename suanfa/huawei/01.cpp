#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin>>a;
    int len=a.size();
    int count=0;
    for(int i=len-1;i>=0;i--){
        if(a[i]==' '){
            break;
        }else{
            count++;
        }
    }
    cout<<count<<endl;
    system("pause");
}