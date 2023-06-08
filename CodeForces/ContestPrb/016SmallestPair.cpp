// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                mn = min(a[i]+a[j]+j-i, mn);
            }
        } 
        cout<<mn<<"\n";
    }
    return 0;
}