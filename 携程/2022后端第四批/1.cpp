// 将给定的正整数x的前k位进行翻转，输出翻转后的数值。
// 例如：x=123456，k=3，则输出321456
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, k;
    cin >> x >> k;
    string s = to_string(x);
    reverse(s.begin(), s.begin()+k);
    // 如果此时第一位为零，则去掉，如果去掉后第一位还是零，则继续去掉直到不为零
    while(s[0]=='0'){
        s.erase(s.begin());
    }
    cout << s << endl;
    return 0;
}