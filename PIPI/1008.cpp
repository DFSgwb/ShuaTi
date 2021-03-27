#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long a[10000+100],b[100000+100];
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);
            b[0]=a[0];
            for(int i=1;i<n;i++)
                b[i]=b[i-1]+a[i];
            long long min_v=0,max_v=0;
            int min_p=-1,max_l=0,max_r=0;
            for(int i=0;i<n;i++){
                if(b[i]<min_v){
                    min_v=b[i];
                    min_p=i;
                }
                if(b[i]-min_v>max_v){
                    max_v=b[i]-min_v;
                    max_l=min_p+1;
                    max_r=i;
                }
            }
            printf("%lld %d %d\n",max_v,max_l,max_r);
    }
    return 0;
}
