#include<bits/stdc++.h>
using namespace std;
bool fun(int x){
    vector<int >v;
    int x_min,x_max;
    while(x!=0){
        int c=x%10;
        x=x/10;
        v.insert(v.begin(),c);
    }
    sort(v.begin(),v.end());
    x_min=v[0];
    x_max=v[v.size()-1];
    if(x_max<=x_min*2) return 1;
    else return 0;
    }
int main(){
    int n;
    cin>>n;
    while(n--){
        long long m,n;
        int count=0;
        cin>>m>>n;
        for(int i=m;i<=n;i++){
            if(fun(i)) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}