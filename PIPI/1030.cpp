#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	char ch;
	char cc;
	while(scanf("%d%d%c",&n,&m,&cc)!=EOF){
		scanf("%c",&ch);
		int i,j;
		for(i=1;i<=m;i++){
			printf("%c",ch);
		}
		printf("\n");
		for(i=1;i<=n-2;i++){
			for(j=1;j<=i;j++){
				printf(" ");
			}
			printf("%c",ch);
			for(j=1;j<=m-2;j++)
			printf(" ");
			printf("%c",ch);
			printf("\n");
		}
		if(n!=1){
		
		for(i=1;i<=n-1;i++)
		printf(" ");
		for(i=1;i<=m;i++)
		printf("%c",ch);
		printf("\n");
		}
	}
return 0; 
}