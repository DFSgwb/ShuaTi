/*
游游的整数操作
游游拿到了一个数组，她有两种操作；
1. 输入1 x，代表所有数加x。
2. 输入2 x，代表所有数减x，同时将所有的负数变成0。即对于每个a^i,把a^i变成max(a^i-x,0)。
游游想知道执行完所有操作后，数组中所有数的和是多少。答案对1e9+7取模。
输入描述：
第一行包含两个正整数n和k，表示数组的长度和操作的次数。(1≤n,k≤1e5)
第二行包含n个正整数ai，表示初始数组。(1≤ai≤1e9)
接下来k行，每行包含两个正整数op和x，op表示操作类型。(1≤x≤1e9, 1≤op≤2)
输出描述：
输出一个整数，表示最后数组中所有数的和对1e9+7取模的结果。
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+10;
ll a[N];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    while(k--){
        int op,x;
        cin>>op>>x;
        if(op==1){
            for(int i=1;i<=n;i++){
                a[i]+=x;
            }
        }else{
            for(int i=1;i<=n;i++){
                a[i]=max(a[i]-x,0ll);
            }
        }
    }
    ll res=0;
    for(int i=1;i<=n;i++){
        res+=a[i];
    }
    cout<<res%1000000007<<endl;
    return 0;
}