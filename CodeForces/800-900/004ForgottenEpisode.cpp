// https://codeforces.com/problemset/problem/440/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, ans=0, ele;
    cin>>n;
    for (int i=0; i<n-1; i++){
        cin>>ele;
        ans += ele;
    }
    cout<<(((n*n)+(n))/2)-ans<<"\n";
    return 0;
}