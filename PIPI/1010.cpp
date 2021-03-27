#include<bits/stdc++.h>
using namespace std;
const int INF=0xffff;
struct edge{
    int from,to,cost;
}es[2000+10];
int d[2000+10];
int n,m;
void shortest_path(int k)
{
    for(int i=1;i<=n;i++) d[i]=INF;
    d[k]=0;
    while(true)
    {
        bool update=false;
        for(int i=0;i<2*m;i++)
        {
            edge e=es[i];
            if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
                d[e.to]=d[e.from]+e.cost;
                update = true;
            }
        }
        if(!update) break;
    }
}
int main()
{
    int s,t,a,u,v,c;
    while(scanf("%d %d %d %d %d",&n,&m,&s,&t,&a)!=EOF&&m+n){
        for(int i=0;i<m;i++){
            scanf("%d %d %d",&u,&v,&c);
            es[i].from = es[i+m].to = u;
            es[i].to = es[i+m].from = v;
            es[i].cost = es[i+m].cost = c;
            if(u%2==0) es[i].cost += 2;
            else es[i].cost += 1;
            if(v%2==0) es[i+m].cost += 2;
            else es[i+m].cost += 1;
        }
        shortest_path(s);
        if(d[t]<=a)printf("YES %d\n",d[t]);
        else printf("KENG\n");
    }
    return 0;
}

