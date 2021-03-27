#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    while (scanf("%d",&n)!=EOF)
    {
        int ans = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            ans+=a/100;
            ans+=(a%100)/50;
            ans+=(a%50)/10;
            ans+=(a%10)/5;
            ans+=(a%5)/2;
            ans+=a%100%50%10%5%2;
        }
        printf("%d\n",ans);
    }
    return 0;
}