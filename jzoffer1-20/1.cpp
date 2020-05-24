#include<iostream>
#include<vector>
using namespace std;
 bool Find(int target, vector<vector<int> > array) ;
 
int main(){
    
    system("pause");
   
}
bool Find(int target, vector<vector<int> > array) 
    {
    if(array.size()==0) return false;
    int row=array.size();
    int col=array[0].size();
    //从最后一行开始遍历，比其数小，向上遍历，如果比其数大，向右遍历
    for(int i=0;i<col;i++)
    {
        if(target>array[row-1][i])
        {
            continue;
        }else if(target==array[row-1][i]){
            return true;
        }else{
            if(row>1){
                for(int j=row-1;j>=0;j--){
                    if(target==array[j][i]) return true;
                }
            }
        }
    }
    return false;
    }

