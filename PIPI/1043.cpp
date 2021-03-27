#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&m);
		if(m==0){
			printf("%d\n",1);
			continue;
		}
		if(m==1){
			printf("%d\n",55);
			continue;
		}
		printf("%d",5);
		for(int j=1;j<m;j++){
			printf("%d",0);
		}
		printf("%d",5);
		for(int j=1;j<m-1;j++){
			printf("%d",0);
		}
		printf("%d\n",0);
	}
	return 0;
}