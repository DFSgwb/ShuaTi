#include<bits/stdc++.h>
using namespace std;
char s[1011],t[8]={'E','A','S','Y'};
int main(){
    while (scanf("%s",s)!=EOF)
    {
            int len=strlen(s);
            int f=0;
            for(int i=0;i<len;i++){
                if(s[i]=='E'&&f==0) f++;
                else if(s[i]=='A'&&f==1) f++;
                else if(s[i]=='S'&&f==2) f++;
                else if(s[i]=='Y'&&f==3) f++;
            }
            printf("%s\n",f==4?"easy":"difficult");
    }
    return 0;
}