#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        long long sum=0;
        for(int i=1;i<=n;i++){
            sum+=i*i*i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}