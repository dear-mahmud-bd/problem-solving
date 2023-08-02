// https://codeforces.com/contest/1676/problem/H1
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    ll calculateCrossings() { 
        ll n; 
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++) {
            ll k;
            cin >> k;
            v.push_back(k);
        }
        pbds<pair<ll,ll>> segments;
        ll crossings = 0;
        for (ll i = 0; i < n; i++) {
            ll cnt = segments.order_of_key({v[i], 0});
            crossings += i-cnt;
            segments.insert({v[i], i});
        }
        return crossings;
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
        cout<<ob.calculateCrossings()<<"\n";
    }
    return 0;
}