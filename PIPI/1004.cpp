#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[105];
struct node{
    int start,end,w;
}a[5010];
int compare(node x,node y){
    return x.w<y.w;
}
int find(int x){
    while(arr[x]!=x){
        x=arr[x];
    }
    return x;
}
int add(int x,int y){
    int x1=find(x);
    int y1=find(y);
    if(x1!=y1){
        arr[x1]=y1;
        return 1;
    }
    return 0;
}
int main(){
    while(scanf("%d%d",&m,&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%d%d%d",&a[i].start,&a[i].end,&a[i].w);
        }
        sort(a,a+n,compare);
        for(int i=1;i<=m;i++){
            arr[i]=i;
        }
        int num=0;
        int result=0;
        for(int i=0;num<m-1&&i<n;i++){
            if(add(a[i].start,a[i].end)){
                num++;
                result+=a[i].w;
            }
        }
            if(num==m-1){
                printf("%d\n",result);}
            else{
                printf("?\n");
            }
        
    }
    return 0;
}