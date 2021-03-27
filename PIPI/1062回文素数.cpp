#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)   
{
    if(n==1)  
        return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
bool huiwen(int n)    
{
    string str;
    while(n!=0)
    {
        int temp=n%10;
        n=n/10;
        str+=(temp+'0'); 
    }
    for(int i=0;i<=str.length()/2;i++)
    {
        if(str[i]!=str[str.length()-i-1])
            return false;
    }
    return true;
}
int main()
{
    int l,r;
    while(scanf("%d%d",&l,&r)!=EOF)
    {
        int count=0;
        for(int i=l;i<=r;i++)
        {
            if(isPrime(i)&&huiwen(i))
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}




