// https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s, t;
    cin>>s>>t;
    for (int i=0; i<s.size(); i++){
        if(s[i]!=t[i]) count++;
    }
    cout<<count<<"\n";
    return 0;
}