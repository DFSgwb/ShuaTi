#include<bits/stdc++.h>
using namespace std;
const int N=505;
char mp[N][N];
int n,m,x1,x2,y,y2;
struct node{
	int x,y;
};
int dir[][2]={1,0,-1,0,0,1,0,-1};
bool vis[N][N];
void bfs(int sx,int sy){
	queue<node> q;
	q.push({sx,sy});
	vis[sx][sy]=1;
	while(q.size()){
		node now=q.front();q.pop();
		if(now.x>x1) x1=now.x;
		if(now.x<x2) x2=now.x;
		if(now.y>y) y=now.y;
		if(now.y<y2) y2=now.y;
		for(int i=0;i<4;i++){
			int xx=now.x+dir[i][0];
			int yy=now.y+dir[i][1];
			if(xx<0||xx>=n||yy<0||yy>=m||vis[xx][yy]||mp[xx][yy]=='0') continue;
			q.push({xx,yy});
			vis[xx][yy]=1;
		}
	}
}
int main(){
	while(scanf("%d%d",&n,&m)!=EOF){
	for(int i=0;i<n;i++)
		scanf("%s",mp[i]);
	memset(vis,0,sizeof(vis));
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(mp[j][i]=='1'&&!vis[j][i]){
				x1=x2=j,y=y2=i;
				bfs(j,i);
				printf("%d %d\n",x1-x2+1,y-y2+1);
				for(int i=x2;i<=x1;i++){
					for(int j=y2;j<=y;j++){
						printf("%d",vis[i][j]); ///注意这里是打印vis数组 
					}
					printf("\n");
				}
			}
	}
}
