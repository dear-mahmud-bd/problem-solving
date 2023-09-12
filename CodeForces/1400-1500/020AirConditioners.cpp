// https://codeforces.com/problemset/problem/1547/E
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
        int n, k;
        cin>>n>>k;
        vector<ll>ans(n+4,INT_MAX), arr(k), tem(k);
        for (int i = 0; i < k; i++){
            cin>>arr[i];
        }
        for (int i = 0; i < k; i++){
            cin>>tem[i];
            ans[arr[i]] = tem[i];
        }
        for (int i = 1; i <= n; i++){
            ans[i] = min(ans[i], ans[i-1]+1);
        }
        for (int i = n; i >= 1; i--){
            ans[i] = min(ans[i], ans[i+1]+1);
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
    int t=1;
    cin>>t;
    while(t--){
        Solution ob;
        ob.functionName();
    }
    return 0;
}