// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    for (int i=0,j=st.size()-1; i<st.size(),j>st.size()/2; i++,j--){
        if(st[i]!=st[j]){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}