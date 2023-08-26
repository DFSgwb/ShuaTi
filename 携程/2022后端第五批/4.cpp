#include<bits/stdc++.h>
using namespace std;
set<long long> mp;
// 求n的所有因子
void sovle(long long n, vector<long long> &res){
    for(long long i=1;i<=sqrt(n);i++){
        if(n%i==0){
            res.push_back(i);
            res.push_back(n/i);
        }
    }
}
int main(){
    long long a, b;
    cin>>a>>b;
    vector<long long> av, bv;
    sovle(a, av);
    sovle(b, bv);
    for(int i:av){
        for(int j:bv){
            mp.insert(i*j);
        }
    }
    cout<<mp.size()<<endl;
    for (auto i:mp)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}