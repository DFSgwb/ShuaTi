/*
    由于业绩优秀,公司给小Q放了n天的假,身为工作狂的小Q打算在在
    假期中工作、锻炼或者休息。他有个奇怪的习惯：不会连续两天工作或锻炼。
    只有当公司营业时,小Q才能去工作,只有当健身房营业时,小Q才能去健身
    小Q一天只能干一件事。给出假期中公司，健身房的营业情况，求小Q最少需要休息几天。
*/
//思路
//简单dp一下即可，dp思路，dp[i][0]表示前i天，第i天选择休息的休息天数，dp[i][1]表示前i天，
//第i天选择工作的休息天数，dp[i][1]表示前i天，第i天选择健身的休息天数，最后取min(dp[n][0],dp[n][1],dp[n][2])即可
#include<bits/stdc++.h>
using namespace std;
const int Maxn = 1e6+7;
const int INF = 1e9;
int a[Maxn],b[Maxn];
int dp[Maxn][3];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    dp[0][0]=0;
    dp[0][1]=0;
    dp[0][0]=0;
    for(int i=1;i<=n;i++){
        if(a[i]){
            dp[i][1] = min(dp[i-1][0],dp[i-1][2]);
        }
        else dp[i][1] = INF;
        if(b[i]){
            dp[i][2] = min(dp[i-1][0],dp[i-1][1]);
        }
        else dp[i][2] = INF;
        dp[i][0] = min(dp[i-1][1],min(dp[i-1][0],dp[i-1][2]))+1;
    }
    printf("%d\n",min(dp[n][0],min(dp[n][1],dp[n][2])));
    return 0;
}