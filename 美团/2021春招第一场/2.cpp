#include<bits/stdc++.h>
using namespace std;
int ans[5];
double fun(double &num){
    double Num=num*10;
    int n;
    n=int(Num);
    return n/10;
}
int main(){
    int sum=0;
    float cos=0.0;
    double a;
    for(int i=1;i<=5;i++){
        scanf("%d",&ans[i]);
        cos+=ans[i];
        sum+=ans[i]*i;
    }
    a=sum/cos;
    //cout<<sum<<cos<<a;
    
    cout<<fun(a);
    //printf("%.1lf",a);
    return 0;
}