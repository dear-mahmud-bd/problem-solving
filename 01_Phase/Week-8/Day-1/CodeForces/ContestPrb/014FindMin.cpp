// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }
    for (int i=1; i<=n; i++){
        int mn = INT_MAX, j=i;
        while (j<=n && j<=i+k-1){
            mn = min(mn,a[j]);
            j++;
        }
        cout<<mn<<" ";
        i = i+k-1;
    }
    return 0;
}