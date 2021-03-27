#include<bits/stdc++.h>
using namespace std;
long long a[500010];
int main()
{
    long long i,n,j,t;
    for(i = 2;i <= 500010;i++)
        a[i] = 1;
    a[0] = 0;
    a[1] = 1;
    for(i = 2;i <= 250005;i++)
    {
        for(j = 2*i;j <= 500010;j += i)
        {
            a[j] += i;
        }
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}