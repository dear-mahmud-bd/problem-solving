// https://codeforces.com/problemset/problem/1693/A
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    string possibleOrNot() { 
        ll n;
        cin >> n;
        vector<ll> arr(n), prefixSum(n,0);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        prefixSum[0]=arr[0];
        for (ll i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i-1] +arr[i]; 
        }
        if(prefixSum[n-1] != 0) return "NO";
        for (ll i = 0; i < n; i++){
            if(prefixSum[i] < 0) return "NO";
        }
        for (ll i = 0; i < n; i++){
            if(prefixSum[i] == 0){
                for (ll j = i; j < n; j++){
                    if(prefixSum[j] != 0) return "NO";
                } 
                break;
            }
        }
        return "YES";
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
        cout<<ob.possibleOrNot()<<"\n";
    }
    return 0;
}