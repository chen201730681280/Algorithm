#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
const int MAX = 1001;
int MaxLen[MAX][MAX]; 

int main(){
    string s1;
    string s2;
    while(cin>>s1){
        cin>>s2;
        for(int i=0;i<=s1.size();i++){
            MaxLen[0][i]=0;
        }
        for(int j=1;j<=s2.size();j++){
            MaxLen[j][0]=0;
        }
        for(int i=1;i<=s1.size();i++){
            for(int j=1;j<=s2.size();j++){
                if(s1[i-1]==s2[j-1]){
                    MaxLen[i][j]=MaxLen[i-1][j-1]+1;
                }else{
                    MaxLen[i][j]=max(MaxLen[i-1][j],MaxLen[i][j-1]);
                }
            }
        }
        cout<<MaxLen[s1.size()][s2.size()];
      
    }
    // return 0;
    system("pause");
}