// https://codeforces.com/contest/1591/problem/C
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
        ll n, k, ans=0, distance;
        cin >> n >> k;
        vector<ll> pos, neg;
        for(ll i = 0; i < n; i++){
        	cin>>distance;
        	if(distance > 0) pos.push_back(distance);
        	else if(distance < 0) neg.push_back(-distance);
        }
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end());
        for(ll i = pos.size()-1; i >= 0; i-=k){
        	ans += 2*pos[i];
        }
        for(ll i = neg.size()-1; i >= 0; i-=k){ 
        	ans += 2*neg[i];
        }
        ans -= max(pos.empty() ? 0:pos.back(), neg.empty() ? 0:neg.back());
        return ans;
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