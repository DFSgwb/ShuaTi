/*
设计一个数据结构，实现LRU Cache的功能(Least Recently Used – 最近最少使用缓存)。它支持如下2个操作： get 和 put。
int get(int key) – 如果key已存在，则返回key对应的值value（始终大于0）；如果key不存在，则返回-1。
void put(int key, int value) – 如果key不存在，将value插入；如果key已存在，则使用value替换原先已经存在的值。
如果容量达到了限制，LRU Cache需要在插入新元素之前，将最近最少使用的元素删除。
请特别注意“使用”的定义：新插入或获取key视为被使用一次；而将已经存在的值替换更新，不算被使用。
限制：请在O(1)的时间复杂度内完成上述2个操作。
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,list<pair<int,int>>::iterator>m;
    list<pair<int,int>> l;
    int n;
    cin>>n;
    char c;
    while(cin>>c){
        if(c=='p'){
            int k,v;
            cin>>k>>v;
            if(n<=0) continue;
            auto it=m.find(k);
            if(it!=m.end()){
                it->second->second=v;
                continue;
            }
            if(m.size()==n){
                int lastk = l.back().first;
                l.pop_back();
                m.erase(lastk);
            }
            l.push_front({k,v});
            m[k]=l.begin();
        }
        else{
            int k;
            cin>>k;
            auto it = m.find(k);
            if(it==m.end()){
                cout<<-1<<endl; continue;
            }
            int v = it->second->second;
            auto oldit = it->second;
            l.erase(oldit);
            l.push_front({k,v});
            m[k]=l.begin();
            cout<<v<<endl;
        }
    }
    return 0;
}