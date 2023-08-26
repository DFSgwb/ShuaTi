#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=10e+5;
int main() {
    int n;
    cin>>n;
    vector<double>dp1(n);
    vector<double>dp2(n);
    double sum1=0;
    double sum2=0;
    for(int i=0;i<n;i++){
        cin>>dp1[i]>>dp2[i];
    }
    double x, y;
    cin>>x>>y;
    for(int i=0;i<n;i++){
        sum1+=dp1[i];
        sum2+=dp2[i];
    }
    double res=0;
    if(sum1>=x)
        res = min(sum1-y, sum2);
    else
        res = sum2;
    for(int i=0;i<n;i++){
        if(dp1[i]<0||dp2[i]<0||x<y){
             cout<<"error"<<endl;
            break;
        }  
    }
    printf("%.2f", res);
}