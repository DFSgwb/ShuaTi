#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while (cin>>s)
    {
        int a[4]={0,0,0,0},cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z') a[0]++;
            else if(s[i]>='a'&&s[i]<='z') a[1]++;
            else if(s[i]>='0'&&s[i]<='9') a[2]++;
            else a[3]++;
        }
        for(int i=0;i<4;i++)
            if(a[i]!=0) cnt++;
        if(cnt>=3&&s.length()>=8)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}