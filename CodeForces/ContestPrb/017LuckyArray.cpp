// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, mn=INT_MAX, count=0;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
        mn = min(mn,a[i]);
    }
    for (int i=0; i<n; i++){
        if(mn==a[i])count++;
    }
    if(count%2 != 0) cout<<"Lucky\n";
    else cout<<"Unlucky\n";
    return 0;
}