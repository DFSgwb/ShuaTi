#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
int main(){
    ll n;
    cin>> n;
    vector<ll> vec;
    ll sum = 0;
    ll biggest = 0;
    ll flagi = 0; 
    for(ll i = 0; i < n; ++i){
        ll tmp;
        cin>> tmp;
        sum |= tmp;
        if(sum > biggest) {
            biggest = sum;
            flagi = i + 1;
        }
        vec.push_back(tmp);
    }
    for(ll i = 1; i < n; ++i){
        sum = 0;
        for(ll j = i; j < n; ++j){
            sum |= vec[j];
            if(sum == biggest){
                flagi = (flagi <= j - i + 1) ? flagi : (j - i + 1);
                break;
            }
        }
    }
    cout<< flagi << endl;
    return 0;
}