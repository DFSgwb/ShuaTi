/*
游游的正整数
游游拿到了一个正整数a，她每次操作可以选择将a加上x，但必须满足l≤x≤r。游游希望操作结束后
a恰好等于b。游游想知道，最少需要多少次操作，最多需要多少次操作？
输入描述：
共有t组询问，每组询问包含四个正整数a,b,l,r(1≤t≤100000,1≤a,b,l,r≤100000000000000)。
输出描述：
对于每组询问，输出两个正整数，分别表示最少和最多需要的操作次数。
如果不存在任何一种操作使得a恰好等于b，则输出-1
示例：
输入例子：
3
1 6 2 5
1 4 2 2
2 10 2 6
输出例子：
1 2
-1
2 4
*/
#include <bits/stdc++.h>
#include <climits>
using namespace std;



int main() {
    int t;
    cin >> t;
    while(t--) {
        long a, b, l, r;
        scanf("%ld %ld %ld %ld",&a,&b,&l,&r);
        // cin >> a >> b >> l >> r;
        long target = b - a;
        long dis = r - l;
        long most = target / l;
        long remain = target - most * l;
        if(dis * most >= remain) {
            cout << (target + r - 1) / r << ' ' << most << endl;
        }
        else cout << -1 << endl;
    }
}
