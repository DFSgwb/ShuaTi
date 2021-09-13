#include<bits/stdc++.h>
using namespace std;
const int N=10000006;
char str[N];
int main(){
    int n;
    cin>>n;
    while(n--){
        cin>>str;
        int j=0;
        for(int i=0;str[i];i++){
            str[j++]=str[i];   //j还没用 
			if(j>=3&&str[j-1]==str[j-2]&&str[j-2]==str[j-3]) j--;
			if(j>=4&&str[j-1]==str[j-2]&&str[j-3]==str[j-4]) j--;
        }
        str[j]='\0';
        cout<<str<<endl;
    }
    return 0;
}