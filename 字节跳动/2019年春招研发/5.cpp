#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dis[21][21];
    int jh=pow(2,n-1)-1;
    vector<vector<int>> dp;
    for(int i=0;i<n;i++){
        dp.push_back(vector<int>());
        for(int j=0;j<=jh;j++){
            dp[i].push_back(99999);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>dis[i][j];
        }
    }
    for(int i=1;i<n;i++){
        dp[i][0] = dis[i][0];
    }
    for(int i=1;i<=jh;i++){
        for(int j=0;j<n;j++){
            if(j!=0&&i>>(j-1)&1==1) continue;
            else{
                for(int k = 1;k<n;k++){
                    if(i>>(k-1) & 1 == 0)
                        continue;
                    else{
                        if(dp[j][i]>(dp[k][i ^ (1<<(k-1))] + dis[j][k]))
                            dp[j][i] = dp[k][i ^ (1<<(k-1))] + dis[j][k];
                    }
                }
            }
        }
         
    }
   printf("%d",dp[0][jh]);
    return 0; 
}