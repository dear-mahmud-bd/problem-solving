// https://codeforces.com/problemset/problem/1420/B
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
        ll n, pairCnt=0;
        cin >> n;
        unordered_map<ll, ll> mp;
        for (ll i = 0; i < n; i++){
            ll ele;
            cin >> ele;
            ll cnt = 0;
            // find most significant bit...
            while (ele > 1){
                cnt++;
                ele >>= 1;
            }
            mp[cnt]++;
        }
        for (auto it : mp){
            pairCnt += it.second * (it.second-1) / 2;
        }
        return pairCnt;
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