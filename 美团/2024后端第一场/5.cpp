/*
小美染色
现有一颗包含n个节点的树，节点i的权值为w[i]，d[i]代表节点i相邻的节点集合。
一开始所有节点均为白色，若两个相邻节点均为白色且权值的乘积为完全平方数则
可以将两个节点都染成红色，问最多可以将多少个节点染成红色
1 ≤ n ≤ 1e5
1 ≤ w[i] ≤ 1e9
*/
#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1e5 + 5;
vector<int> g[MAXN];
long long square(long long x) { return x * x; }
bool check(long long x) {
  long long t = sqrt(x);
  return square(t) == x || square(t - 1) == x || square(t + 1) == x;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<long long> a(n);
  vector<long long> dp0(n);
  vector<long long> dp1(n);
  for (auto &x : a) cin >> x;
  for (int i = 1; i < n; i++) {
    int a, b;
    cin >> a >> b;
    a--,b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  auto dfs = [&](auto &dfs, int now, int fa) -> void {
    for (auto x : g[now])
      if (x != fa) {
        dfs(dfs, x, now);
        dp0[now] += max(dp1[x], dp0[x]);
      }
    for (auto x : g[now])
      if (x != fa && check(a[now] * a[x])) {
        dp1[now] = max(dp1[now], dp0[now] - max(dp1[x], dp0[x]) + dp0[x] + 2);
      }
  };
  dfs(dfs, 0, 0);
  cout << max(dp0[0], dp1[0]);
  return 0;
}