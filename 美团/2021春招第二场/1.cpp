#include<bits/stdc++.h>
using namespace std;
int ans[10001];
void fun1(int n){
    for(int i=1;i<=n;++i){
        ans[i]=i;
    }
}
int find(int n){
    return n==ans[n]?n:(ans[n]=find(ans[n]));
}
void fun2(int x,int y){
    x=find(x);
    y=find(y);
    if(x==y){
        return ;
    }else if(x>y){
        fun2(y,x);
    }else{
        ans[y]=x;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    fun1(n);
    while(m--){
        int a,b;
        scanf("%d %d",&a,&b);
        fun2(a,b);
    }
    int num=0;
    map<int ,vector<int>>mp;
    for(int i=1;i<=n;i++){
        ans[i]=find(i);
        if(mp[ans[i]].size()==0){
            ++num;
        }
        mp[ans[i]].emplace_back(i);
    }
    cout<<num<<endl;
    for(auto it=mp.begin();it!=mp.end();++it){
        vector<int> tmp=it->second;
        cout<<tmp[0];
        for(int i=1;i<tmp.size();++i){
            cout<<' '<<tmp[i];
        }
        cout<<endl;
    }
    return 0;
}