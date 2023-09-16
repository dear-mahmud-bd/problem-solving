// https://codeforces.com/contest/1581/problem/B
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
        ll n, m, k;
        cin>>n>>m>>k;
        if(m < n-1){
            cout << "NO" << "\n";
        } else if (m > n*(n-1)/2){
            cout << "NO" << "\n";
        } else if (k <= 1){
            cout << "NO" << "\n";
        } else if (k == 2) {
            if(n==1) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        } else if(k==3) {
            if(m == n*(n-1)/2) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        } 
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
        // cout<<ob.functionName()<<"\n";
        ob.functionName();
    }
    return 0;
}