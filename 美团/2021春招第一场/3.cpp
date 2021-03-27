#include<bits/stdc++.h>
using namespace std;
struct node{
    int x;   //满多少
    int y;   //优惠价格
    int z;   //付款钱
}money;
int ans[50005];
int main(){
    int n;
    int X=0,Y=0;
    cin>>n;
    while(n--){
        scanf("%d %d",&money.x,&money.y);
        if(money.x>money.y){
            X+=money.x;
            Y+=money.x-money.y;
        }
        else{
            X+=money.y;
            Y+=0;
        }
    }
    cout<<X<<' '<<Y;
    return 0;
}