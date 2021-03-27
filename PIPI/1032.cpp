#include <iostream>
#include <queue>
#include <memory.h>
using namespace std;
struct Node{
    int x,y;
    int step;
};
queue<Node> q;
void bfs(int **dist,int n,int m){
    int visit[n][m];
    memset(visit,0,sizeof(visit));
    while(!q.empty()){
        Node p = q.front();
        q.pop();
        int type[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
        for(int i=0;i<4;++i){
            int tmpx = p.x + type[i][1];
            int tmpy = p.y + type[i][0];
            if(tmpx<0||tmpx>=m||tmpy<0||tmpy>=n || visit[tmpy][tmpx]==1 || dist[tmpy][tmpx]==0){//超出 
            }else{
                visit[tmpy][tmpx]=1;
                Node n;
                n.x = tmpx;n.y = tmpy;n.step = p.step+1;
                q.push(n);
                dist[tmpy][tmpx] = p.step+1;
            }
        }
    }
}
int main(){
    int m,n;
    while(scanf("%d %d ",&n,&m)!=EOF){
        char map;
        int **dist = new int*[n];
        for(int i=0;i<n;++i){
            dist[i] = new int[m];
            for(int j=0;j<m;++j){
                cin>>map;
                if(map=='0'){
                    dist[i][j] = 0;
                    Node p;
                    p.y = i;
                    p.x = j;
                    p.step = 0;
                    q.push(p);
                }else{
                    dist[i][j] = 10000;
                }
            }
        }
        bfs(dist,n,m);
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cout<<dist[i][j]<<" ";
            }
            cout<<endl;
        }
    }
} 