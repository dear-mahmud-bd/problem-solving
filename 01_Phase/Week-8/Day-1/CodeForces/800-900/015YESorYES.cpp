// https://codeforces.com/contest/1703/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str, y="YES"; 
    while (t--){
        cin>>str;
        for (char& c : str) {
            c = toupper(c);
        }
        if(y==str) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}