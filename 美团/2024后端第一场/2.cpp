/*
第二题：小美走公路
现有一条环形公路，总共有n个站点，a[i]代表第i个站点与第i+1个站点之间的距离，
特殊的，a[n]表示第n个站点与第一个站点之间的距离。
小美的出发地为x，目的地为y，请你求出x到y的最短距离
1 ≤ n ≤ 1e5
1 ≤ a[i] ≤ 1e9
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+10;
ll k[N];
// 算两遍
int main(){
    int n,x,y;
    ll sum=0;
    ll lesum=0;
    // 先算一遍总长度，无非就是顺着或者逆着走两种情况
    for(int i=1;i<=n;i++){
        cin>>k[i];
        sum+=k[i];
    }
    cin>>x>>y;
    if(y>=x){
        for(int i=x;i<y;i++){
            lesum+=k[i];
        }
    }else{
        for(int i=y;i<x;i++){
            lesum+=k[i];
        }
    }
    ll res = min(lesum,sum-lesum);
    cout<<res<<endl;
}