// https://codeforces.com/problemset/problem/433/B
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
long long int ar[N], srtAr[N];
long long int dp[3][N];
void sumByKey(int n){
    long long int sumAr=0, sumSrtAr=0;
    for (int i=0; i<n; i++){
        sumAr += ar[i];
        dp[1][i] = sumAr;
    }
    for (int i=0; i<n; i++){
        sumSrtAr += srtAr[i];
        dp[2][i] = sumSrtAr;
    }
}
int main(){
    int n, T, k, l, r;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>ar[i];
    }
    copy(ar, ar+n, srtAr);
    sort(srtAr, srtAr+n);
    sumByKey(n);
    cin>>T;
    while (T--){
        cin>>k>>l>>r;
        if(k==1){
            cout<<dp[1][r-1]-dp[1][l-2]<<"\n";
        }else{
            cout<<dp[2][r-1]-dp[2][l-2]<<"\n";
        }
    }
    return 0;
}