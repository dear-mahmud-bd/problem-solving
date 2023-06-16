// https://www.spoj.com/problems/CSUMQ/en/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
long long int ar[N], dp[N];
void sumByKey(int n){
    long long int sumAr=0;
    for (int i=0; i<n; i++){
        sumAr += ar[i];
        dp[i] = sumAr;
    }
}
int main(){
    int n, T, l, r;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>ar[i];
    }
    sumByKey(n);
    cin>>T;
    while (T--){
        cin>>l>>r;
        cout<<dp[r]-dp[l-1]<<"\n";
    }
    return 0;
}