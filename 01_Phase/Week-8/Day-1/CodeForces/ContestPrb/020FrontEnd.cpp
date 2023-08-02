// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    int front=0, end=n-1;
    while (front <= end) {
        cout<<a[front]<<" ";
        front++;
        if (front <= end) {
            cout<<a[end]<<" ";
            end--;
        }
    }
    return 0;
}