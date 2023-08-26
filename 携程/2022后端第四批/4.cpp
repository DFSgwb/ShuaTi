/*
游游拿到了一个数组，她准备在其中选择两个数，使得乘积的末尾至少有x个0。游游想知道，至少有多少种不同的取数方法？
*/
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const int N = 100010;
 
int n, m;
int a[N];
 
int cnt[40][30];
 
int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) cin >> a[i];
 
    for(int i = 1; i <= n; i ++) {
        int c2 = 0, c5 = 0, t = a[i];
        while(t % 2 == 0) c2 ++ , t /= 2;
        while(t % 5 == 0) c5 ++ , t /= 5;
        cnt[c2][c5] ++ ;
    }
 
    ll ans = 0;
    for(int i = 1; i <= n; i ++) {
        int c2 = 0, c5 = 0, t = a[i];
        while(t % 2 == 0) c2 ++ , t /= 2;
        while(t % 5 == 0) c5 ++ , t /= 5;
 
        cnt[c2][c5] -- ;
 
        for(int j = 0; j < 40; j ++) {
            for(int k = 0; k < 30; k ++) {
                if(cnt[j][k] && min(j + c2, k + c5) >= m) ans += cnt[j][k];
            }
        }
    }
 
    cout << ans << "\n";
    return 0;
}