#include <iostream>
#include <string.h>
#include <stdio.h>
 
using namespace std;
 
char a[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
 
int tra(char num[]){
    int i;
    for(i=0;i<10;i++){
        if(strcmp(num,a[i])==0)
            return i;
    }
}
 
int main()
{
    int A,B;
    char num[10];
    while(1){
        A=B=0;
        while(scanf("%s",num)&&strcmp(num,"+")!=0){
            A=10*A+tra(num);
        }
        while(scanf("%s",num)&&strcmp(num,"=")!=0){
            B=10*B+tra(num);
        }
        if(A+B>0){
            printf("%d\n",A+B);
        }
        else {
            break;
        }
    }
    return 0;
}