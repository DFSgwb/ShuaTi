#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 200010
int n, x, k, a[N], pos;
ll l[N], r[N], ans;
int main()
{
    scanf("%d%d%d", &n, &x, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == x)
            pos = i; // 记录x的位置
    }
    l[0] = 1, r[0] = 1; // 自身，当k=1,序列中仅有x时，就是第1小数
    int num = 0;
    for (int i = pos - 1; i >= 1; i--)
    {
        if (a[i] < x)
            num++; // num代表在x左边的比x小的第num个数
        l[num]++;  // 更新满足是num的区间长度
    }
    num = 0;
    for (int i = pos + 1; i <= n; i++)
    {
        if (a[i] < x)
            num++;
        r[num]++;
    }
    for (int i = 0; i <= k - 1; i++)
    { // 左右贡献累乘
        ans += l[i] * r[k - 1 - i];
    }
    cout << ans << endl;
    return 0;
}