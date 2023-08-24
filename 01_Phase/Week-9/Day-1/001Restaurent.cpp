// https://cses.fi/problemset/task/1619
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    int maxCustomer() { 
        int n, l, r, sum=0, ans=0;
        cin>>n;
        map<int,int>prefix;
        for (int i = 1; i <= n; i++){
            cin>>l>>r;
            prefix[l]++;
            prefix[r+1]--;
        }
        for(auto [idx, val]: prefix){
            sum += val;
            ans = max(ans, sum);
        }
        return ans;
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
        cout<<ob.maxCustomer()<<"\n";
    }
    return 0;
}