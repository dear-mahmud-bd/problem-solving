// https://codeforces.com/contest/1792/problem/C
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
    int functionName() { 
        ll n, ele, left, right;
        cin>>n;
        vector<ll>arr(n+1);
        for (ll i = 0; i < n; i++){
            cin>>ele;
            arr[--ele] = i;
        }
        left = n/2; // max possible
        right = n - left;
        while (left>0 && arr[left-1]<arr[left] && arr[right-1]<arr[right]){
            left--;
            right++;
        }
        return left;
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