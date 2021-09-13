#include <iostream>
#include <map>
using namespace std;
bool fun(map<int,int> mp,int num){
    if(num<=0)return true;
    while(mp[mp.begin()->first]==0)mp.erase(mp.begin());
    map<int, int>::iterator it = mp.begin();
    if(num%3!=0 && (it->second)>=2){
        mp[it->first]-=2;
        if(fun(mp, num-2))return true;
        mp[it->first]+=2;
    }
    if((it->second)>=3){
        mp[it->first]-=3;
        if(fun(mp, num-3))return true;
        mp[it->first]+=3;
    }
    if((it->second)>0 && mp[(it->first)+1]>0 && mp[(it->first)+2]>0){
        mp[it->first]--;
        mp[(it->first)+1]--;
        mp[(it->first)+2]--;
        if(fun(mp, num-3))return true;
        mp[(it->first)]++;
        mp[(it->first)+1]++;
        mp[(it->first)+2]++;
    }
    return false;
}
int main(){
    map<int,int> rec;
    int tmp;
    bool flag=false;
    for(int i=0;i<13;i++){
        cin>>tmp;
        rec[tmp]++;
    }
    for(int i=1;i<10;i++){
        if(rec[i]==4)continue;
        rec[i]++;
        if(fun(rec,14)){
            cout<<i<<" ";
            flag=true;
        }
        rec[i]--;
    }
    if(!flag)
        cout<<0;
    return 0;    
}
