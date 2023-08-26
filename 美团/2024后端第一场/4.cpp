/*
小美将字符串平铺成矩阵
现有一个长度为n的且仅包含小写字母的字符串s，小美想把这个字符串s平铺成一个xy的矩阵，
要求xy == n，平铺的方法为：将字符串前y个字符按顺序放到第一行，
将字符串第y+1到第2*y个字符按顺序放到第二行，以此类推。
现规定矩阵的权值为连通量的数目，连通量代表的是从一个点出发，
上下左右若存在相同字符则可以继续扩展该连通量
（类似于一个岛屿，上下左右若存在相同的字符则可以扩展这个岛屿，
或者可以理解为上下左右如果是相同字符则可以合并成一个连通量），求矩阵的最小权值
1 ≤ n ≤ 1e4
*/
#include <bits/stdc++.h>
using namespace std;
int nmove[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
int cal(const vector<string>& v){
    int n = v.size();
    int m = v[0].size();
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    int res = 0;
    auto dfs = [&](auto& dfs, int x, int y, char c){
        if(x<0||x>=n||y<0||y>=m||vis[x][y]||v[x][y]!=c)
            return;
        vis[x][y] = true;
        for(int i=0;i<4;i++){
            dfs(dfs, x+nmove[i][0], y+nmove[i][1], c);
        }
    };
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j])
                    continue;
                res++;
                dfs(dfs, i, j, v[i][j]);
            }
        }
    return res;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = n;
    for(int i=1;i<=n;i++){
        if(n%i) continue;
        vector<string> v(i);
        int x = n/i;
        for(int j=0;j<i;j++){
            v[j] = s.substr(j*x, x);
        }
        ans = min(ans, cal(v));
    }
    cout<<ans<<endl;
    return 0;
}