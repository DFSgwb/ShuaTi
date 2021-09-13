#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int i,l,q;
    while(cin>>s){
        i=s.length();
        l=i/8;
        q=i%8;
        for(i=0;i<l;i++){
            string temp(s,i*8,8);
            std::cout<<temp<<endl;
        }
        if(q!=0){
            string re(s,l*8,q);
            for(i=0;i<8-q;i++){
                re=re+"0";
            }
            std::cout<<re<<endl;
        }
    }
    return 0;
}