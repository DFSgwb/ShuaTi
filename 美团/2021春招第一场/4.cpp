#include <bits/stdc++.h>
using namespace std;
bool is_parlin(const string& str) {
    for (int i = 0, j=str.size()-1; i<=j;++i,--j) {
        if (str[i]!= str[j]) {
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    cin >> str;
    for (int i=0; i!=str.size(); ++i) {
        string tmpstr{str};
        tmpstr.erase(i,1);
        if (is_parlin(tmpstr)) {
            cout << tmpstr;
            return 0;
        }
    }
    cout <<"false";
}