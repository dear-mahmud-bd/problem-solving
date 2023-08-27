// https://codeforces.com/problemset/problem/276/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    ll functionName() { 
        ll n, q, l, r, sum=0;
        cin>>n>>q;
        vector<ll>arr(n+2), diff(n+2), prefix(n+2);
        for (ll i = 1; i <= n; i++){
            cin>>arr[i];
        }
        for (ll i = 0; i < q; i++){
            cin>>l>>r;
            diff[l]++;
            diff[r+1]--;
        }
        for (ll i = 1; i <= n; i++){
            prefix[i] = prefix[i-1]+diff[i];
        }
        sort(arr.begin(),arr.end(), greater<ll>());
        sort(prefix.begin(),prefix.end(), greater<ll>());
        for (ll i = 0; i < n; i++){
            sum += arr[i]*prefix[i];
        }
        return sum;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.functionName()<<"\n";
    }
    return 0;
}