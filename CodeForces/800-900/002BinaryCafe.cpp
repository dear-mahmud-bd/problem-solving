// https://codeforces.com/contest/1840/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int T, N, K, mn;
    cin>>T;
    while (T--){
        long long int N, K, mn, possible;
        cin>>N>>K;
        possible = pow(2,K)-1>INT_MAX ? INT_MAX:pow(2,K)-1;
        mn = min(N,possible);
        cout<<mn+1<<"\n";
    }
    return 0;
}