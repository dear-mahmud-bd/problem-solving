// https://www.spoj.com/problems/AGGRCOW/
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
        ll n, c;
        cin>>n>>c;
        vector<ll>position(n);
        for (ll i = 0; i < n; i++){
            cin>>position[i];
        }
        sort(position.begin(), position.end());
        ll low=0, high=position[n-1], gap=0;
        while (low<=high){
            ll mid = low + (high-low)/2, cnt=1, left=0;
            for (ll i=1; i<n && cnt<c; i++){
                if(position[i]-position[left] >= mid){
                    left = i;
                    cnt++;
                }
            }
            if(cnt >= c){
                gap = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return gap;
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