// https://codeforces.com/problemset/problem/1804/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    string functionName() { 
        ll n, x, p;           
        cin >> n >> x >> p;
        ll req = (n-x) % n;
        for(ll i = 1; i <= min(p, 2*n); i++){
            ll moves = ((i*i) + i) / 2;
            moves %= n;
            if(moves == req){
                return "YES";
            }
        }
        return "NO";
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
    }
    return 0;
}