#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[201];
    char temp[15];
    scanf("%s",temp);
    getchar();
    while(strcmp(temp,"ENDOF INPUT")){
        gets(a);
        getchar();
        for(int i=0;i<strlen(a);i++){
            if((a[i]>64)&&(a[i]<=69))
                a[i]=(char)(a[i]+21);
             else if(a[i]>69&&a[i]<=90)
                a[i]=(char)(a[i]-5);
            else 
                a[i]=a[i];
        }
        scanf("%s",temp);
        printf("%s\n",a);
        scanf("%s",temp);
        getchar();
    }
    return 0;
}