// https://codeforces.com/contest/1807/problem/E
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
    void functionName() { 
        ll n; 
        cin >> n;
        vector<ll> a(n+1);
        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
        }
        ll ans, low=1, high=n;
        while(low <= high) {
            ll mid = low + (high-low)/2;
            ll len = mid - low + 1;
            if(low == high) {
                ans = mid;
                break;
            }
            cout<<"? "<<len<<" ";
            ll sum = 0;
            for(ll i = low; i <= mid; i++) {
                cout << i <<" ";
                sum += a[i];
            }
            cout << endl;
            fflush(stdout);
            ll res;
            cin >> res;
            if(res > sum) {
                high = mid;
            }
            else low = mid + 1;
        }
        cout<< "! "<< ans <<endl;
        fflush(stdout);
        return;
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
        // cout<<ob.functionName()<<"\n";
        ob.functionName();
    }
    return 0;
}