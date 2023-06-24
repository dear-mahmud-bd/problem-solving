// https://codeforces.com/contest/1843/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    ll binarySum() { 
        ll n, sum;
        cin>>n;
        sum=n;
        while (n>=1){
            n /= 2;
            sum += n;
        }
        return sum;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.binarySum()<<"\n";
    }
    return 0;
}