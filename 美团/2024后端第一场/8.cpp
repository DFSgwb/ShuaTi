/*
小美定义一个数组a的权值计算如下：
首先将a的每一对相邻两项求和，得到一个b数组。那么b数组的最大值减最小值即为a数组的权值。
例如a=[1,2,3]，则b=[3,5]，b的最大值减最小值为2，所以a的权值为2。
现在小美希望你能构造一个长度为n的排列，满足权值尽可能小。
排列的定义是将1到n的数字每个使用一次，且不重复使用。
第一行包含一个整数n，表示排列的长度。(2≤n≤200000)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int left=1, right=n;
    vector<int> res;
    while(left<right){
        res.push_back(left++);
        res.push_back(right--);
    }
    if(left==right) res.push_back(left);
    for(int i=0; i<n; ++i){
        cout << res[i] << " ";
    }
}