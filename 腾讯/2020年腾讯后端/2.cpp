#include<bits/stdc++.h>
using namespace std;
/*   小Q在周末的时候和他的小伙伴来到大城市逛街,一条步行街上有很多高楼,
    共有n座高楼排成一行。小Q从第一栋一直走到了最后一栋,
    小Q从来都没有见到这么多的楼,所以他想知道他在每栋楼的位置处能看到多少栋楼呢？
   （当前面的楼的高度大于等于后面的楼时，后面的楼将被挡住）
*/
//从前向后和从后向前遍历数组，分别维护两个单调栈表示站在当前位置向前和向后能看到的房子数
//最后在加上自身这件房子即可
stack<int>s;
const int Maxn = 1e6+10;
int Left[Maxn];
int Right[Maxn];
int a[Maxn];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		//向前能看到的房子个数 
		Left[i] = s.size();
	    while(!s.empty()&&s.top()<=a[i]){
	    	s.pop();
		}
		s.push(a[i]);
	}
	while(!s.empty()) s.pop();
	for(int i=n;i>=1;i--){
		//向后能看到的房子个数 
		Right[i] = s.size();
		while(!s.empty()&&s.top()<=a[i]){
	    	s.pop();
		}
		s.push(a[i]);
	}
	for(int i=1;i<=n;i++){
		cout<<Left[i]+Right[i]+1<<' '; 
	}
	return 0;
}

