/*
游游的整数拆分
游游拿到了一个正整数n，她准备将n拆分成两个正整数a和b，满足
a+b=n且a∗b是3的倍数。你能告诉游游有多少种拆分方式吗？
输入描述：
第一行包含一个正整数t，表示测试数据的组数(1≤t≤100000000000000)。
输出描述：
满足条件的拆分方式的种数。
示例：
输入：10
输出：6
*/
#include<bits/stdc++.h>
using namespace std;
// 求1->n/2中有多少个数是3的倍数或者n-i是3的倍数
int main(){
    int n; cin>>n;
    if (n % 3 == 0) { cout<< n/3 - 1 <<'\n'; }else { cout<< n/3 * 2 <<'\n'; }
}