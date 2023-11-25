// https://codeforces.com/contest/1859/problem/B
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
        ll n, m, ele, firstMin=INT64_MAX, secondMin=INT64_MAX;
        cin>>n;
        vector<vector<ll>>arr(n);
        for (int i = 0; i < n; i++){
            cin>>m;
            for (int j = 0; j < m; j++){
                cin>>ele;
                arr[i].push_back(ele);
            }
        }
        for (int i = 0; i < n; i++){
            sort(arr[i].begin(), arr[i].end());
        }
        for (int i = 0; i < n; i++){
            firstMin = min(arr[i][0], firstMin);
            secondMin = min(arr[i][1], secondMin);
        }
        ll ans=0, cnt=0;
        for (int i = 0; i < n; i++){
            if(arr[i][1]==secondMin && cnt==0) cnt++;
            else ans += arr[i][1];
        }
        return ans+firstMin;
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