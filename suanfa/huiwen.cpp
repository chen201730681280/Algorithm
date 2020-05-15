#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int MAX = 1001;
int MaxLen[MAX][MAX]; 

int MaxL(string s1,string s2){

 for(int i=0;i<=s1.size();i++){
            MaxLen[0][i]=0;
        }
        for(int j=1;j<=s2.size();j++){
            MaxLen[j][0]=0;
        }
        for(int i=1;i<=s1.size();i++){
            for(int j=1;j<=s2.size();j++){
                if(s1[i]==s2[j]){
                    MaxLen[i][j]=MaxLen[i-1][j-1]+1;
                }else{
                    MaxLen[i][j]=max(MaxLen[i-1][j],MaxLen[i][j-1]);
                }
            }
        }
        return MaxLen[s1.size()][s2.size()];
}
int main(){
    string s1;
    while(cin>>s1){
        string s2=s1;
        reverse(s2.begin(),s2.end());
        cout<<s1.size()-MaxL(s1,s2)<<endl;
    }
    system("pause");
}