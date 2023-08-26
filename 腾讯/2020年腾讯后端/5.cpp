/*
    小Q在进行一场竞技游戏,这场游戏的胜负关键就在于能否能争夺一条长度为L的河道,即可以看作是[0,L]的一条数轴。
    这款竞技游戏当中有n个可以提供视野的道具−真视守卫,第i个真视守卫能够覆盖区间[xi,yi]。
    现在小Q想知道至少用几个真视守卫就可以覆盖整段河道。
*/
/*
思路：

*/
#include<bits/stdc++.h>
using namespace std;
const int Maxn = 1e5+10;
typedef struct node{
	int x,y;
}Node;
Node stu[Maxn];
int cmp(Node a,Node b){
	if(a.x==b.x) return a.y>b.y;
	return a.x<b.x;
}
int main(){
	ios::sync_with_stdio(false);//提高大数据的输入和输出节省时间
	int n,L;
	cin>>n>>L;
	for(int i=1;i<=n;i++){
		cin>>stu[i].x>>stu[i].y;
	}
	sort(stu+1,stu+n+1,cmp);
    if(stu[1].x>0){
    	cout<<-1<<'\n';
    	return 0;
	} 
	int now  = stu[1].y,Max = stu[1].y;
	int cnt = 1;
	for(int i=1;i<=n+1;i++){
		if(now>=L) break;
		if(stu[i].x<=now){
			Max = max(Max,stu[i].y);
			if(Max>=L){
				now = Max;
				cnt++;
				break;
			} 
		}
		else{
			cnt++;
			now = Max;
			i--; 
		}
	}
	if(now>=L)  
	cout<<cnt<<'\n';
    else cout<<-1<<'\n';
	return 0;
}
