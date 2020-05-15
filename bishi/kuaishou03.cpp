class Solution {
public:
    /**
     * 根据顾客属性计算出顾客排队顺序
     * @param a int整型vector 顾客a属性
     * @param b int整型vector 顾客b属性
     * @return int整型vector
     */
    vector<int> WaitInLine(vector<int>& a, vector<int>& b) {
        // write code here
        //最后每个得到的就是bi*n-ai+(ai-bi)j
        //n个加起来就是前面固定，(ai-bi)j三个加起来最小
        vector<int> jian;
        int c=0;
        for(int i=0;i<a.size();i++){
            c=a[i]-b[i];
            jian.push_back(c);
        }
        vector<int> s=jian;
        vector<int> pos;
        sort(s.begin(),s.end());
        //用于遍历s
        for(int i=a.size()-1;i>=0;i--){
            //用于遍历jian
            for(int j=0;j<a.size();j++){
                if(s[i]==jian[j]){
                    pos.push_back(j+1);
                    break;
                }
            }
        }
        return pos;
    }
};