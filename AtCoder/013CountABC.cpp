// https://atcoder.jp/contests/abc150/tasks/abc150_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count=0;
    cin>>n;
    string st;
    cin>>st;
    for (int i=0; i<n; i++){
        if(st[i]=='A'&&st[i+1]=='B'&&st[i+2]=='C'){
            count++;
            i += 2;
        }
    }
    cout<<count<<"\n";
    return 0;
}