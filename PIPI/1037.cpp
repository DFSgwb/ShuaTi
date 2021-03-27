#include<bits/stdc++.h>
using namespace std;
struct node{
	char id[25];
	int sum;
}p[1005];
 
int cmp(node x,node y){
	if(x.sum!=y.sum)
		return x.sum>y.sum;
	else
		return strcmp(x.id,y.id)>0?0:1;
		//return x.id>y.id;
}
 
int main(){
	int n,m,g;
	int fs[15];
	while(~scanf("%d",&n)&&n){
		scanf("%d%d",&m,&g);
		for(int i=1;i<=m;i++)
			scanf("%d",&fs[i]);
		int t,ans=0;
		for(int i=0;i<n;i++){
			scanf("%s%d",p[i].id,&t);
			p[i].sum=0;
			for(int j=0;j<t;j++){
				int x;
				scanf("%d",&x);
				p[i].sum+=fs[x];
			}
			if(p[i].sum>=g)
				ans++;
		}
		sort(p,p+n,cmp);
		printf("%d\n",ans);
		for(int i=0;i<ans;i++)
			printf("%s %d\n",p[i].id,p[i].sum);
	}
	return 0;
} 
