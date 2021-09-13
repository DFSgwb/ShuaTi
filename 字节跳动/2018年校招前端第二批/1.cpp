#include<bits/stdc++.h>
using namespace std;
int ans[300001];
int main(){
    int n,l,r,x;
    cin>>n;
    for(int i=0;i<n;i++){cin>>ans[i];}
    int q;
    cin>>q;
    while(q--){
        scanf("%d %d %d",&l,&r,&x);
        int count=0;
         for(int i=l-1;i<r;i++){
             if(ans[i]==x) count++;
         }
        cout<<count<<endl;
    }
    return 0;
}