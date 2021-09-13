#include<bits/stdc++.h>
using namespace std;
/*struct node{
    int id;//订单号
    int m;//到店时间
    int n;//离店时间
}A;
int search(vector<node>arr,int len,int data){
    int l=0;
    int r=len-1;
    int mid=0;
    while(l<=r){
        mid=1+(r-1)/2;
        if(arr[mid].m>data&&arr[mid].n>data) r=mid-1;
        else if(arr[mid].m<data&&arr[mid].n<data) l=mid+1;
        else return mid;
    }
    return -1;
}
int main(){
    int y;
    long long data;
    vector<long >dd;
    vector<node>res;
    cin>>y;
    cin>>data;
    for(int i=0;i<y;i++){
        node re;
        cin>>re.id;
        cin>>re.m>>re.n;
        res.push_back(re);
    }
    int tem = search(res,y,data);
    if(tem==-1){
        cout<<"null";
        return 0;
    }
    else{
        int left = tem;
        int right = tem+1;
        while (left>-1)
        {
            if(res[left].m<data&&res[left].n>data) dd.push_back(res[left].id);
            left--;
        }
        for(int i=dd.size()-1;i>-1;i++)
            cout<<dd[i]<<endl;
        while(right<res.size()){
            if(res[right].n<data&&res[right].n>data) 
                cout<<res[right].id<<endl;
                left++;
        }
    }
    return 0;
}*/

int main()
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    vector<int>num(n),r(n),c(n),res;
    for(int i=0;i<n;i++)
    {
        cin>>num[i]>>r[i]>>c[i];
        if(a>=r[i]&&a<=c[i])
            res.push_back(num[i]);
    }
    if(res.size()==0)
        cout<<"null"<<endl;
    else
    {
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<endl;
    }
    return 0;
}