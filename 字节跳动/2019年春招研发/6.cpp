#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int count = 1024-n;
        int num_64=count/64;
        int num_16=count%64/16;
        int num_4=count%16/4;
        int num_1=count%4;
        cout<<num_64+num_16+num_4+num_1<<endl;
    }
    return 0;
}