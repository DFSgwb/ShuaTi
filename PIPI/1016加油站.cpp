#include<bits/stdc++.h>
using namespace std;
const int N=5003;
int cost[N];
int n,k;
int main(){
    while(scanf("%d %d",&n,&k)!=EOF){
        bool flag=0;
        for(int i=0;i<=k;i++){
            scanf("%d",&cost[i]);
            if(cost[i]>n) flag=1;
        }
        if(flag){
            printf("NoSolution\n");continue;
        }
        int ans=0;
        int now=0,fule=n;
        while(now<=k){
            if(fule>=cost[now]){
                 fule-=cost[now];
                 now++;     
            }else{
                fule = n;
                ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}