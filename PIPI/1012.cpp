#include<bits/stdc++.h>
using namespace std;
char s[1011];
int num[11];
int main(){
    while(scanf("%s",s)!=EOF){
        int len = strlen(s);
        int maxv=-1,maxx=-1;
        for(int i=0;i<len;i++) num[s[i]-'0']++;
        for(int i=0;i<10;i++){
            if(maxx<num[i]){
                maxv=i;
                maxx=num[i];
            }
            num[i]=0;
        }
        printf("%d\n",maxv);
    }
    return 0;
}