// https://codeforces.com/contest/1676/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--){
        int n, mn=INT_MAX;
        cin>>n;
        int ar[n];
        for (int i=0; i<n; i++){
            cin>>ar[i];
            mn = min(mn, ar[i]);
        }
        int sum=0;
        for (int i=0; i<n; i++){
            sum += (ar[i]-mn);
        }
        cout<<sum<<"\n";
    }
    return 0;
}