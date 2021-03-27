#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k,ans,cnt,m;
    while(scanf("%lld",&k)!=EOF){
        ans=k/4;
        cnt=k%4;
        if(cnt==0){
            m=4*ans*ans;
        }
        else if(cnt==1){
            m=4*ans*ans+2*ans-1;
        }
        else if(cnt==2){
            m=4*ans*ans+4*ans;
        }
        else if(cnt==3){
            m=4*ans*ans+6*ans+1;
        }
        if(k%2==0){
            printf("%lld.0\n",m/2);
        }else{
            printf("%lld.5\n",m/2);
        }
    }
    return 0;
}