// 请实现一个函数用来匹配包括'.'和'*'的正则表达式。
// 模式中的字符'.'表示任意一个字符，
// 而'*'表示它前面的字符可以出现任意次（包含0次）。
// 在本题中，匹配是指字符串的所有字符匹配整个模式。
// 例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，
// 但是与"aa.a"和"ab*a"均不匹配

// bool match(char* str,char* pattern){
//     if(str || pattern){
//         return true;
//     }
//     if(str && pattern==NULL){

//     }
//     if(pattern[0]==str[0]){
//         return match(str+1,pattern+1);
//     }
// }
#include<iostream>
using namespace std;

int main(){
    // 不能使用单引号
    // char*表示字符指针类型，指向字符串的第一个元素时，就能标明这个字符串
    char* str="abcdefg";
    cout<<*str<<endl;
    cout<<str<<endl;
    cout<<str[0]<<endl;
    cout<<str+1<<endl;
    system("pause");
}

