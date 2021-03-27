#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        long long x=0,y=0;
        for(int i=n;i<=m;i++){
            if(i%2==0) 
                x+=i*i;
            else y+=i*i*i;
        }
        printf("%lld %lld\n",x,y);
    }
    return 0;
}