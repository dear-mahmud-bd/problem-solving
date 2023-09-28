// https://codeforces.com/contest/1614/problem/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
const int MOD = 1e9+7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    ll modularExponentiation(ll base, ll exponent) {
        ll result = 1;
        while (exponent) {
            if (exponent % 2) {
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            exponent /= 2;
        }
        return result;
    }
    int functionName() { 
        ll n, m, x, totalCoziness = 0;
        cin >> n >> m;
        for (int i = 0; i < m; i++){
            int l, r;
            cin >> l >> r >> x;
            totalCoziness |= x;
        }
        return (modularExponentiation(2, n-1) * totalCoziness) % MOD;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.functionName()<<"\n";
        // ob.functionName();
    }
    return 0;
}