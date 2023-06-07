// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include<bits/stdc++.h>
using namespace std;
long long int fact(int n){
    if(n<=0) return 1;
    return n*fact(n-1);
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        cout<<fact(n)<<"\n";
    }
    return 0;
}