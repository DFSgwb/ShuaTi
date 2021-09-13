#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,sum;
    int m;
    while(scanf("%lf %d",&n,&m)!=EOF){ 
        for(sum=0.0;m--;n=sqrt(n))
            sum+=n;
        printf("%.2lf\n",sum);  
    }
    return 0;
}