/*
游游的字符重排
游游定义一个字符串是“好串”，当且仅当该字符串相邻的字符不相等。例如"arcaea"是好串，而"food"不是好串。
游游拿到了一个字符串，她可以将该字符串的各个字符顺序随意打乱。她想知道一共可以生产多少种不同的好串？
输入描述:
一个仅包含小写字母的字符串，长度不超过10.
输出描述:
一个整数，表示可以生成的好串的种数。
示例1：
输入：arc
输出：6
解释：arc,acr,rac,rca,car,cra
示例2：
输入：aab
输出：1
解释：aba
*/
#include<bits/stdc++.h>
using namespace std;
// 判断是否有相邻的相同字符，有的话就是不好的串
bool isGood(string s){
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]) return false;
    }
    return true;
}
int main(){
    string s; cin>>s;
    sort(s.begin(), s.end());
    int res = 0;
    do{
        if(isGood(s)) res++;
    }while(next_permutation(s.begin(), s.end()));
    cout<<res<<endl;
}