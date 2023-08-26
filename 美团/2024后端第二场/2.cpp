/*
小美的加法
小美有一个长度为n的数组，她想将这个数组进行求和，也就是sum=a1+a2+...+an。
小美可以使用魔法(也可以不使用)，将其中一个加号变成乘号，使得sum的值最大。
求出最大的sum值。
输入描述
第一行一个整数n，表示数组的长度。(1<=n<=10^5)
第二行n个整数，表示数组的元素。(1<=ai<=10^9)
输出描述
输出一个整数，表示最大的sum值。
示例1
输入
6
1 1 4 5 1 4
输出
27
说明：将第二个加号变成乘号，sum=1+1+4*5+1+4=27
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    long long res=0;
    for(int i=0;i<n;i++){
        res+=nums[i];
    }
    long long tmp=0;
    // 从左到右遍历，找到连续相乘的最大两个数
    long long max1=0, l=0;
    for(int i=0;i<n;i++){
        if(nums[i]*nums[i+1]>max1&&nums[i]*nums[i+1]>nums[i]+nums[i+1]){
            max1=nums[i]*nums[i+1];
            l=i;
        }
    }
    /*
    long long maxAdd = 0;
    long long tmp;
    for (int i = 0; i < n - 1; i++) {
        tmp = (long long)nums[i] * nums[i + 1] - nums[i] - nums[i + 1];
        if (tmp > maxAdd) {
            maxAdd = tmp;
        }
    }
    if (maxAdd > 0) {
        res += maxAdd;
    }
    */
    res = max(res, res+max1-nums[l]-nums[l+1]);
    cout<<res<<endl;
}