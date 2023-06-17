// https://codeforces.com/contest/1692/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b, c, d, count;
    cin>>t;
    while (t--){
        count=0;
        cin>>a>>b>>c>>d;

        if(a<b)count++;
        if(a<c)count++;
        if(a<d)count++;
        
        cout<<count<<"\n";
    }
    return 0;
}