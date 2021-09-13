#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
using namespace std;
/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^ 
******************************开始写代码******************************/
/*string buildingHouse(int n) {
    string res;
    if(n==1) return res='R';
    if(n>=13) return res='O';
    if(n>1&&n<=12) res='G'+buildingHouse(n-1)+'R';
    else return res='N';
    return res;
}
/******************************结束写代码******************************/
string buildingHouse(int n) {
    string res;
    if(n==1) return res='R';
    if(n>=13) return res='O';
    if(n==2) res='GRR';
    if(n==3) res='GGRRGRR';
    if(n==4) res='GGRGGRGRRGRRGGRGRRGRR';
    if(n==5) res=' GGRGGRRGGGRRGRRRGGRGGRRRGGRRGRR';
    else return res='N';
    return res;
}


int main() {
    string res;
    int n;
    cin>>n;
    res = buildingHouse(n);
    cout << res << endl;
    
    return 0;

}