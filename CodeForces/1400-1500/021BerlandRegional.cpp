// https://codeforces.com/problemset/problem/1519/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void functionName() { 
        ll n, rate;
        cin>>n;
        vector<vector<ll>>uniRate(n+4);
        vector<ll>uni(n+4),ans(n+4);
        for (int i = 1; i <= n; i++){
            cin>>uni[i];
        }
        for (int i = 1; i <= n; i++){
            cin>>rate;
            uniRate[uni[i]].push_back(rate);
        }
        for (int i = 1; i <= n; i++){
            ll sz = uniRate[i].size();
            sort(uniRate[i].rbegin(), uniRate[i].rend());
            vector<ll>prefixSum(sz+1);
            for (int j = 0; j < sz; j++){
                prefixSum[j+1] = prefixSum[j]+uniRate[i][j];
            }
            for (int j = 1; j <= sz; j++){
                ans[j] += prefixSum[sz - sz%j];
            }
        }
        for (int i = 1; i <= n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.functionName();
    }
    return 0;
}