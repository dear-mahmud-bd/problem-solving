// https://codeforces.com/problemset/problem/1420/C1
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    ll findMaxStrength() { 
        ll n, q;
        cin>>n>>q;
        vector<ll>arr(n);
        for (ll i = 0; i < n; i++){
            cin>>arr[i];
        }
        ll strength=arr[0];
        for (ll i = 1; i < n; i++){
            if(arr[i]>arr[i-1]){
                strength += arr[i]-arr[i-1];
            }
        }
        return strength;
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
        cout<<ob.findMaxStrength()<<"\n";
    }
    return 0;
}