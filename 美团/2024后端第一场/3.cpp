/*
小美切蛋糕

现有一个n*m的蛋糕矩阵a，a[i][j]代表一小块蛋糕的美味度，
现在小美要和一个好朋友分享蛋糕，因此需要把这个蛋糕矩阵切成两半，
并且要求分成两半后的两块蛋糕的美味度尽可能相等，
即求出分成两半后的两块蛋糕的abs(s1 - s2)的最小值，
s1代表第一块蛋糕的美味度，s2代表第二块蛋糕的美味度。
要求：必须保证每一小块蛋糕的完整性（即不能斜着切，如果把整个大蛋糕正着放）
1 ≤ n , m≤ 1e3
1 ≤ a[i][j] ≤ 1e5
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    long long sum=0;
    cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            sum+=a[i][j];
        }
    }
    for(int i=1;i<n;i++){
        a[i][0]+=a[i-1][0];
    }
    for(int i=1;i<m;i++){
        a[0][i]+=a[0][i-1];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            a[i][j]+= a[i-1][j] + a[i][j-1]-a[i-1][j-1];
        }
    }
    long long res = INT_MAX;
    for(int i=0;i<n;i++){
        res = min(res, abs(a[i][m-1]-(sum-a[i][m-1])));
    }
    for(int j = 0; j < m; j++){ 
        res = min(res, abs(a[n-1][j] - (sum - a[n-1][j])));
    }
    cout<<res<<endl;
}