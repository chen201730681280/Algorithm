class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        int id=0;
        if(pushV.empty() ||popV.empty()) return false;
        
        for(int i=0;i<popV.size();i++){
            while(a.empty() || a.top()!=popV[i]){
                a.push(pushV[id]);
                id++;
                if(id>popV.size()){
                    return false;
                }
            }
            a.pop();
        }
        if(a.empty()) return true;
        else {return false;}
    }
private:
    stack<int> a;
    
    
};