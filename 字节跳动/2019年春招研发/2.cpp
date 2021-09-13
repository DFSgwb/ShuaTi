#include<bits/stdc++.h>
using namespace std;
long long mod = 99997867;
long long max(long long x){
    if(x<=0) return 0;
    else return (x*(x-1)/2)%mod;
}
int main()
{
	long long n, d, i, j, count = 0;
	cin >> n >> d;
	long long *arr = (long long*)calloc(sizeof(long long), n);
	cin >> arr[0] >> arr[1];
	for (i = 2, j = 0; i < n; i++)
	{
		cin >> arr[i];
		while (arr[i] - arr[j] > d)
			j++;
		count += max(i - j);
	}
	cout << count % mod;
	free(arr);
	
	return 0;
}