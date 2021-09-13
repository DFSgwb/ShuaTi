#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,c;
    scanf("%d%d%d",&n,&m,&c);
    vector<int> vec[c+1];
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int t;
            cin>>t;
            vec[t].push_back(i);
            }
    }
    int count=0;
    for(int i=1;i<=c;i++){
        sort(vec[i].begin(),vec[i].end());
        int size=vec[i].size();
        for(int j=1;j<size;j++){
            if(vec[i][j]-vec[i][j-1]<m){
                count++;
                break;
            }
            if((j==size-1)&&(vec[i][j]+m)%n>vec[i][0]){
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
