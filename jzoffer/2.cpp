class Solution {
public:
	void replaceSpace(char *str,int length) {
        if(str==NULL) return;
        int count=0;
        //记录有几个空格
        for(int i=0;i<length;i++){
            //要用单引号
            if(str[i]==' ') count++;
        }
        int length1=length+count*2;
        
        for(int j=length1-1;j>=0;j--){
            str[j]=str[length-1];
            if(str[j]==' '){
                str[j]='0';
                str[j-1]='2';
                str[j-2]='%';
                j=j-2;
            }
           length--;
        }
	}
};