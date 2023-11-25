// https://codeforces.com/contest/1859/problem/C
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
    ll functionName() { 
        ll n, maxSum=0;
        cin>>n;
        for (ll i = 1; i <= n; i++){
            vector<ll>arr,decrease;
            for (ll j = 1; j <= i-1; j++){
                arr.push_back(j);
            }
            for (ll j = i; j <= n; j++){
                decrease.push_back(j);
            }
            reverse(decrease.begin(), decrease.end());
            for(ll num :decrease){
                arr.push_back(num);
            }
            ll sum = 0, mx = 0;
            for (ll j = 1; j <= n; j++){
                sum += j*arr[j-1];
                mx = max(mx, j*arr[j-1]);
            }
            maxSum = max(maxSum, sum-mx);
        }
        return maxSum;
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