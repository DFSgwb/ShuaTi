#include <iostream>
using namespace std;
int main()
{
    int res=0;
    long num;
    scanf("%ld",&num);
    unsigned long flag=1;
    while(flag){
        if(num&flag) res++;
        flag<<=1;
    }
    cout<<res<<endl;
}