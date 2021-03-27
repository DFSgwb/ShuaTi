#include<bits/stdc++.h>
using namespace std;
int main(){
    int gread;
    while(scanf("%d",&gread)!=EOF){
        if(gread>=108&&gread<=120) printf("A\n");
        else if(gread>=100&&gread<=107) printf("B\n");
        else if(gread>=80&&gread<=99) printf("C\n");
        else if(gread>=72&&gread<=79) printf("D\n");
        else  if(gread>=0&&gread<=71) printf("E\n");
        else printf("Score is error!\n");
    }
    return 0;
}