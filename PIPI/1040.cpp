#include<bits/stdc++.h>
using namespace std;
bool judge(int num){
    int count1=0;
    int count2=0;
    while(num>0){
        int temp=num%2;
        if(temp==0) count1++;
        else count2++;
        num=num/2;
    }
    if(count1>count2) return true;
    else return false;
}
int main(){
    int counta = 0;
    int countb = 0;
    for(int i=0;i<=1000;i++){
        if(judge(i)) counta++;
        else countb++;
    }
    printf("%d %d",counta,countb);
    return 0;
}
