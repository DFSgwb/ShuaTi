#include<bits/stdc++.h>
using namespace std;
int num[10];
int visited[10];
int n,t;
void dfs(int x){
        if(t==n) {
            int j;
            for(j=0;j<n-1;j++) printf("%d ",num[j]);
            printf("%d\n",num[n-1]);
            }
        int i;
        for(i=n-1;i>=0;i--){
            if(!visited[i]){
                visited[i]=1;
                num[t++]=i+1;
                dfs(i+1);
                visited[i]=0;
                t--;
            }
    }
}
int main(){
    int i;
    while(scanf("%d",&n)!=EOF){
        memset(visited,0,sizeof(visited));
        t=0;
        dfs(0);
    }
}

