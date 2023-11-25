// https://codeforces.com/contest/1898/problem/B
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
        ll n, operation=0;
        cin>>n;
        vector<ll>arr(n);
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        for (int i = n-2; i >= 0; i--){
            if(arr[i] > arr[i+1]){
                ll factor = (arr[i]-1) / (arr[i+1]);
                operation += factor;
                arr[i] = (arr[i]) / (factor +1);
            }
        }
        return operation;
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