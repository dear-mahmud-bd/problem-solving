// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++){
        if(str[i]=='E'&&str[i+1]=='G'&&str[i+2]=='Y'&&str[i+3]=='P'&&str[i+4]=='T'){
            cout<<" ";
            i = i+4;
        }else{
            cout<<str[i];
        }
    }
    cout<<"\n";
    return 0;
}