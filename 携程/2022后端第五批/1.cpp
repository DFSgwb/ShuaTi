/*
游游的字符串构造
游游希望你构造一个长度为n的、仅由'y'、'o'、'u'三种字符组成的字符串，
需要保证该字符串包含恰好k个"you"子串。你能帮帮她吗？
输入描述：
第一行包含两个正整数n和k，用空格隔开
1≤n≤100000，0≤k≤100000
输出描述：
输出一个字符串，表示满足要求的字符串。如果不存在这样的字符串，则输出-1。
示例：
输入：9 1
输出：yuuoyouy
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    if(k>n/3){
        cout << -1 << endl;
        return 0;
    }
    string res;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(cnt<k){
            res += "you";
            cnt++;
        }else{
            res += "y";
        }
    }
    // 翻转res
    reverse(res.begin(), res.end());
    cout << res << endl;
}