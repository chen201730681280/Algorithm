#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int m=0;
    int n=0;
    cin>>m>>n;
    int mod=0;
    string ans='';
    int count=1;
    while(m>0){
        mod=m%n;
        m=m/n;
        if(mod>9){
            switch (mod)
            {
            case 10:
                ans='A'+ans;
                break;
            case 11:
                ans='B'+ans;
                break;
            case 12:
                ans='C'+ans;
                break;
            case 13:
                ans='D'+ans;
                break;
            case 14:
                ans='E'+ans;
                break;
            case 15:
                ans='F'+ans;
                break;
            default:
                break;
            }
        }else{
             ans=""+mod+ans;
        }
       
        count=count*10;
    }
   
    cout<<ans<<endl;
    system("pause");
}