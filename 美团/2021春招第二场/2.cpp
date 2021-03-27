#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<2187){
        cout<<0;
        return 0;
    }
    else if(n<10000){
        cout<<1<<endl;
        cout<<"2178 8712"<<endl;
        return 0;
    }
    vector<pair<int ,int>> res{{2178,8712}};
    for(int i=10002;i<=n/4;i++){
        string a=to_string(i);
        string b=to_string(i*4);
        reverse(a.begin(),a.end());
        if(a==b){
            res.push_back({i,i*4});
        }
    }
    int len=res.size();
    cout<<len<<'\n';
    for(int i=0;i<len;i++){
        cout<<res[i].first<<' '<<res[i].second<<endl;;
    }
    return 0;
}