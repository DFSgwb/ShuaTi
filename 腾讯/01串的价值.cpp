/*
01串的价值
给出一个只包含 0 和 1 的 01 串 s ，下标从 1 开始，设第 i 位的价值为 vali ，则价值定义如下：
    1. i=1时:val1 = 1
    2. i>1时：
    2.1 若 si ≠ si-1 , vali = 1
    2.2 若 si = si-1 , vali = vali-1 + 1
字符串的价值等于 val1 + val2 + val3 + ... + valn你可以删除 s 的任意个字符，问这个串的最大价值是多少。
时间限制：C/C++ 1秒，其他语言2秒
空间限制：C/C++ 256M，其他语言512M
输入描述：
    第一行一个正整数 n ，代表串长度。
    接下来一行一个 01 串 s 。
    1 ≤ n ≤ 5,000
输出描述：
    输出一个整数代表答案
示例1
输入例子：
        6
        010101
输出例子：
        7
例子说明：
删除后的串为0001或0111时有最大价值
示例2
输入例子：
        20
        11111000111011101100
输出例子：
        94
示例3
输入例子：
        4
        1100
输出例子：
        6
*/
/** 解题思路：
 * 计算1和0各自数目，假设1更多有sum次，找出1的最左和最右，求和公式1+到sum，然后左边右边都是0，按规则加上。
 */
#include <bits/stdc++.h>
using namespace std;
int val_of_len(int len)
{
    return (len * (1 + len)) / 2;
}
int main()
{
    int t, max_val;
    string str;
    int count[2] = {0, 0};
    cin >> t >> str;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '0')
        {
            count[0]++;
        }
        else if (str[i] == '1')
        {
            count[1]++;
        }
    }
    int val1, val0;
    val0 = val_of_len(count[0]) + val_of_len(str.find_first_of('0')) +
           val_of_len(str.length() - 1 - str.find_last_of('0'));
    val1 = val_of_len(count[1]) + val_of_len(str.find_first_of('1')) + val_of_len(str.length() - 1 - str.find_last_of('1'));
    cout << val1 << val0 << endl;
    max_val = max(val0, val0);
    cout << max_val << endl;
    return 0;
}
