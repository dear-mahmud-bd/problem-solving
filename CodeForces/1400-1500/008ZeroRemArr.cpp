// https://codeforces.com/problemset/problem/1374/D
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    ll minMoves() { 
        ll n, k, ans=0;
        cin >> n >> k;
        vector<ll>arr(n), temp(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            arr[i] %= k;
            if(arr[i] != 0) arr[i] = k-arr[i];
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        ans=arr[0], temp[0]=arr[0];
        for (ll i = 1; i < n; i++) {
            if(arr[i]==0){
                continue;
            } else if(arr[i]==arr[i-1]) {
                temp[i]=temp[i-1]+k;
            } else {
                temp[i]=arr[i];
            } 
            ans = max(ans, temp[i]);
        }
        return (ans==0)? ans:ans+1;
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
        cout<<ob.minMoves()<<"\n";
    }
    return 0;
}