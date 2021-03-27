#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;

int main() 
{
	int n;
	while(scanf("%d",&n)&&n){
	    mp.clear();
		for(int i=0;i<n;i++){
			string str;
			cin>>str;
			mp[str]++;
		}
		map<string,int>::iterator it;
		int max=-1;//最大值
		string key;
		for(it=mp.begin();it!=mp.end();it++){
			if(it->second>max){
				max=it->second;
				key=it->first;
			}
		}
	cout<<key<<endl;
	}
	return 0;
}