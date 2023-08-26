/*
    判断两个长度相同的字符串s1,s2,s1是否可以通过一次交换两个字符而变成相同的字符串
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        string s1, s2;
        cin >> s1 >> s2;
       // 记录s1和s2中不相同的字符的个数
        int cnt = 0;
        // 记录s1和s2中不相同的字符的位置
        int pos1 = -1, pos2 = -1;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                cnt++;
                if(cnt==1){
                    pos1 = i;
                }else if(cnt==2){
                    pos2 = i;
                }
            }
        }
        if(cnt==0){
            // 判断s1中是否有重复字符
            unordered_set<char> st;
            for(int i=0;i<s1.size();i++){
                if(st.count(s1[i])){
                    cnt++;
                    break;
                }else{
                    st.insert(s1[i]);
                }
            }
            // 如果s1中有重复字符，则输出YES，否则输出NO
            if(cnt==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }else if(cnt==2){
            if(s1[pos1]==s2[pos2] && s1[pos2]==s2[pos1]){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}