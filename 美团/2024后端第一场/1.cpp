/*
有一个排列，一共有n个数，还有特殊的两个数x和y，
请你帮助小美判断x和y在排列中是否相邻，
是则输出”Yes”，不是则输出”No”
数据范围：
1 ≤ n ≤ 1e5
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int idx_x = -1, idx_y = -1;
    for(int i=0;i<n;i++){
        if(nums[i]==x)
            idx_x = i;
        if(nums[i]==y)
            idx_y = i;
    }
    if(abs(idx_x-idx_y)==1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}