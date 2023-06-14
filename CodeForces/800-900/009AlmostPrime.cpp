// https://codeforces.com/problemset/problem/26/A
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    int sqrtN = sqrt(n);
    for (int i=2; i<=sqrtN; i++) {
        if (n%i == 0) return false;
    }
    return true;
}
int main(){
    int n, ans=0;
    cin>>n;
    for (int i=1; i<=n; i++){
        int count=0;
        for (int j=2; j<=i; j++){
            if(isPrime(j) && i%j==0) count++;
            if(count > 2) break;
        }
        if(count==2) ans++;
    }
    cout<<ans<<"\n";
    return 0;
}