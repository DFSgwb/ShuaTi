#include<bits/stdc++.h>
using namespace std;
struct Node{
    int x;   
    double y;
}node[101];
double cmp(Node A,Node B){
    return A.y<B.y;
}
int main(){
    int n,t;
    double result;
    while(scanf("%d %d",&n,&t)!=EOF){
        result=0;
        for(int i=0;i<n;i++){
            scanf("%lf %d",&node[i].y,&node[i].x);
        }
        sort(node,node+n,cmp);
        for(int i=0;i<n;i++){
            if(t>=node[i].x){
                result+=node[i].x*node[i].y;
                t-=node[i].x;
            }
            else{
                result+=t*node[i].y;
                t=0;
                break;
            }
        }
        if(t!=0) result+=t;
        printf("%d\n",int(result));
    }
    return 0;
}