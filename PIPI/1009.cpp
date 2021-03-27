#include<bits/stdc++.h>
using namespace std;
int n,m,s,t;
const int N=1005;
double g[N][N],dist[N];
bool st[N];
void dijkstra(int s,int t){
    memset(dist,0x3f,sizeof(dist));
    for(int i=1;i<=n;i++){
        st[i]=0;
        dist[i]=g[s][i];
    }
    for(int i=1;i<n;i++){
        int t=-1;
        for(int j=1;j<=n;j++){
            if(!st[j]&&(t==-1||dist[t]<dist[j]))
                t=j;
        }
        for(int j=1;j<=n;j++){
            dist[j]=max(dist[j],dist[t]*g[t][j]);
        }
        st[t]=1;
    }
    if(dist[n]==0x3f3f3f3f) 
        printf("What a pity!\n");
    else
        printf("%.3lf\n",dist[t]);
}
int main(){
    while (scanf("%d",&n)!=EOF){
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                scanf("%lf",&g[i][j]);
            scanf("%d",&m);
            while(m--){
                scanf("%d%d",&s,&t);
                dijkstra(s,t);
        }
    }    
    return 0;
}