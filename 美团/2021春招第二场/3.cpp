#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string strat="";
    int num=0;
    while(n--){
        string s_a,s_b;
        cin>>s_a>>s_b;
        if(strat==""){
            strat=s_a;
        }
        if(strat==s_b){
            ++num;
            strat="";
        }
    }
    printf("%d\n",num);
    return 0;
}