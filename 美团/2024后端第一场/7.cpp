/*
小美有两个长度为n的小写字母的字符串a和b。
小美定义两个字符串的匹配度为1<=i<=n时，ai=bi的数量。
例如a="abcde",b="adcfe"，则匹配度为3。
现在你可以最多进行一次以下操作：
对于字符串b，选择两个索引i和j，交换bi和bj的位置。
小美想知道，进行操作后，两个字符串的匹配度最大为多少。
*/ 
#include <bits/stdc++.h>
using namespace std;

int main(){
    // 首先输出两个字符串的公共子串的长度
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int res = 0;
    // 当前s1和s2的公共连续子串长度
    int cur = 0;
    // 当前s1和s2的公共连续子串的起始位置
    int start = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s1[i]==s2[j]){
                int k = i, l = j;
                while(k<n && l<n && s1[k]==s2[l]){
                    k++;
                    l++;
                }
                if(k-i>cur){
                    cur = k-i;
                    start = i;
                }
            }
        }
    }
    res = max(res, cur);
    // 当时s2进行一次i,j位置交换后，s1和s2的公共连续子串的长度
    int cur1 = 0;
    int res1 = 0;
    // 当前s1和s2的公共连续子串的起始位置
    int start1 = 0;
    // 选择交换的位置
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(s2[i], s2[j]);
            for(int k=0;k<n;k++){
                for(int l=0;l<n;l++){
                    if(s1[k]==s2[l]){
                        int m = k, n = l;
                        while(m<n && m<n && s1[m]==s2[n]){
                            m++;
                            n++;
                        }
                        if(m-k>cur1){
                            cur1 = m-k;
                            start1 = k;
                        }
                    }
                }
            }
            res1 = max(res1, cur1);
            swap(s2[i], s2[j]);
        }
    }
    res = max(res, res1);
    cout << res << endl;
}