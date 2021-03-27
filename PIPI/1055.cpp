#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[52][52]={0};
    int n,i,j,t;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++)
        {
            for(j=0;j<i+1;j++)
            {
                if(i==0||j==0)
                a[i][0]=1;
                if(i>0&&j!=0)
                {
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
                }    
                    printf("%lld ",a[i][j]);
                if(j==i) 
                    printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
