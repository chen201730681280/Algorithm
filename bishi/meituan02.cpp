#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    vector<int> bef(n);
    vector<int> aft(n);
    int a=0;
    for(int i=0;i<n;i++){
        cin>>a;
        bef[i]=a;
    }
    for(int i=0;i<n;i++){
        cin>>a;
        aft[i]=a;
    }
    int count=0;
    vector<int> index(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(bef[i]==aft[j]){
                index[i]=j;
                break;
            }
        }
    }
    for(int i=n-1;i>0;i--){
        for(int j=i-1;j>=0;j--){
            if(index[i]<index[j]){
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
   return 0;
}