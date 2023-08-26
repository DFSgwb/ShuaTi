/*
小美的好矩阵
小美定义一个矩阵是好矩阵，当且仅当这个矩阵满足以下条件：
1.矩阵仅由'A','B','C'三种字符构成，且三种字符都出现过
2.矩阵相邻的字符都不相等
现在给定一个n*m的矩阵，小美想知道有多少3*3的子矩阵是好矩阵

输入描述：
第一行包含两个整数n,m，表示矩阵的行数和列数。(1≤n,m≤1000)
接下来n行，每行输入一个仅包含大写字母的长度为m的字符串。
输出描述：
输出一个整数，表示好矩阵的数量。
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> matrix(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    int res = 0;
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            vector<char> chars;
            chars.clear();
            chars.push_back(matrix[i - 1][j - 1]);
            chars.push_back(matrix[i - 1][j]);
            chars.push_back(matrix[i - 1][j + 1]);
            chars.push_back(matrix[i][j - 1]);
            chars.push_back(matrix[i][j]);
            chars.push_back(matrix[i][j + 1]);
            chars.push_back(matrix[i + 1][j - 1]);
            chars.push_back(matrix[i + 1][j]);
            chars.push_back(matrix[i + 1][j + 1]);
            sort(chars.begin(), chars.end());
            chars.erase(unique(chars.begin(), chars.end()), chars.end());
            if (chars.size() == 3) {
                if (chars[0] == 'A' && chars[1] == 'B' && chars[2] == 'C') {
                    if ( matrix[i][j] != matrix[i - 1][j]  && matrix[i][j] != matrix[i][j - 1] &&
                         matrix[i][j] != matrix[i][j + 1]  &&matrix[i][j] != matrix[i + 1][j] &&
                         matrix[i-1][j-1]!=matrix[i][j-1]&&matrix[i-1][j-1]!=matrix[i-1][j]&&
                         matrix[i-1][j+1]!=matrix[i-1][j]&&matrix[i-1][j+1]!=matrix[i][j+1]&&
                         matrix[i+1][j-1]!=matrix[i][j-1]&&matrix[i+1][j-1]!=matrix[i+1][j]&&
                         matrix[i+1][j+1]!=matrix[i+1][j]&&matrix[i+1][j+1]!=matrix[i][j+1])
                        res++;
                }
            }
        }
    }
    cout << res << endl;
}