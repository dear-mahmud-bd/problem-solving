// https://codeforces.com/contest/1795/problem/C
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
        ll n, sum=0;
        cin>>n;
        vector<ll>a(n), b(n), ans(n,0);
        for (ll i = 0; i < n; i++){
            cin>>a[i];
        }
        for (ll i = 0; i < n; i++){
            cin>>b[i];
        }
        multiset<ll>st;
        for (ll i = 0; i < n; i++){
           st.insert(a[i]-sum);
           while(!st.empty() && *st.begin()+sum <=b[i]) {
              ans[i] += *st.begin()+sum;
              // cout<<ans[i]<<" "<<*st.begin()<<" "<<sum<<"\n";
              st.erase(st.begin());
           }
           // cout<<*st.begin()<<"\n";
           ans[i] += st.size()*b[i];
           sum -= b[i];
           // cout<<ans[i]<<" "<<sum<<"\n";
        }
        for(ll i = 0; i < n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
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