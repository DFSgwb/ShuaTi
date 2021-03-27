#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5+5;
int k;
char s[MAX];
int q[MAX];//q[i]记录的是排在第i位的字符在s中的位置

int main(){
    while(scanf("%d",&k)!=EOF){
        scanf("%s",s);
        int len=strlen(s);
        int left=0,right=-1;
        for(int i=0;i<len-k;i++){
            while(right>=left&&s[q[right]]>s[i]) right--;
            q[++right]=i;
        }
        for(int i=len-k;i<len;i++){
            while(right>=left&&s[q[right]]>s[i]) right--;
            q[++right]=i;
            printf("%c",s[q[left++]]);
        }
        printf("\n");
    }
    return 0;
}