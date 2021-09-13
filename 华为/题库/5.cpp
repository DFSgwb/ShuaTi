#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int bit=0;
        int num=0,len;
        len=s.size();
        for(int i=len-1;i>=2;i--){
            if(isdigit(s[i])){
                num+=(s[i]-'0')*pow(16,bit);
            }else{
                num+=(s[i]-'A'+10)*pow(16,bit);
            }
            bit++;
        }
        cout<<num<<endl;
    }
    return 0;
}