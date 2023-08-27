// https://codeforces.com/problemset/problem/295/A
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
const int N=1e5+4;
vector<ll>arr(N+4), prefix(N+4), L(N+4), R(N+4), D(N+4), diff(N+4);
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void functionName() { 
        ll n, m, k, l, r;
        cin>>n>>m>>k;
        for (ll i = 1; i <= n; i++){
            cin>>arr[i];
        }
        for (ll i = 1; i <= m; i++){
            cin>>L[i]>>R[i]>>D[i];
        }
        for (ll i = 1; i <= k; i++){
            cin>>l>>r;
            prefix[l]++;
            prefix[r+1]--;
        }
        for (ll i = 1; i <= m; i++){
            prefix[i] = prefix[i]+prefix[i-1];
        }
        for (ll i = 1; i <= m; i++){
            diff[  L[i]  ] += D[i]*prefix[i];
            diff[ R[i]+1 ] -= D[i]*prefix[i];
        }
        for (ll i = 1; i <= n; i++){
            diff[i] = diff[i]+diff[i-1];
            cout<< arr[i]+diff[i]<<" ";
        }
        cout<<"\n";
        return ;
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
        ob.functionName();
    }
    return 0;
}