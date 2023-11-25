// https://codeforces.com/problemset/problem/1601/A
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
        int n, g_c_d = 0;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        map<int, int>mp;
        for (int i = 0; i < 30; i++){
            for (int j = 0; j < n; j++){
                if((arr[j]>>i) & 1) mp[i]++;
            }
        }
        for (auto it:mp){
            g_c_d = gcd(g_c_d, it.second);
            // cout<<it.first<<" "<<it.second<<"\n";
        }
        // cout<< g_c_d <<"\n";
        for (int i = 1; i <= n; i++){
            if(g_c_d%i == 0) cout<<i<<" ";
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