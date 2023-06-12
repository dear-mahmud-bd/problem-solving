// https://atcoder.jp/contests/abc072/tasks/abc072_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    for (int i=0; i<st.size(); i++){
        if(i%2 != 1) cout<<st[i];
    }
    return 0;
}