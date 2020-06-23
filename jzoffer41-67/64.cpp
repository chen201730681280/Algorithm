class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int>max;
        if(num.empty()||size>num.size()||size<1)
            return max;
        int m;
        for(int i=0;i<num.size()-size+1;i++)
            {
            m=num[i];
            for(int j=i+1;j<i+size;j++)
            {
             
            if(num[j]>m)
                {
                m=num[j];
            } 
         }
            max.push_back(m);
        }
             
       return max;    
    }
};