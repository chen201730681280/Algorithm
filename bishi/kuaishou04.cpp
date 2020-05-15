class Solution {
public:
    /**
     * 获取最大可同事办公员工数
     * @param pos char字符型vector<vector<>> 工位分布
     * @return int整型
     */
    int GetMaxStaffs(vector<vector<char> >& pos) {
        // write code here
        int count=0;
        if(pos[0][0]=='.'){
            pos[0][0]='1';
            count++;
        }
        for(int j=1;j<pos[0].size();j++){
            if(pos[0][j]=='.' && pos[0][j-1]!='1'){
                pos[0][j]='1';
                count++;
            }
        }
        for(int i=1;i<pos.size();i++){
            if(pos[i][0]=='.' &&pos[i-1][0]!='1'){
                pos[i][0]='1';
                count++;
            }
        }
        for(int i=1;i<pos.size();i++){
            for(int j=1;j<pos[0].size();j++){
                if(pos[i][j]=='.'){
                    if(pos[i-1][j]!='1' &&pos[i][j-1]!='1'){
                        pos[i][j]='1';
                        count++;
                    }
                }
            }
        }
        return count;
    }
};