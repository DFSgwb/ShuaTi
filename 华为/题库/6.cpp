#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long s=sqrt(n);
    for(long long i=2;i<=s;i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
        if(n==1) break;
    }
    if(n!=1) cout<<n<<" ";
    cout<<endl;
    return 0;
}