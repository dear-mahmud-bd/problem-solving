// https://codeforces.com/problemset/problem/1846/E1
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
const int MOD = 1e9+7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 1e6;
unordered_map<ll,bool>mp;
class Solution{
    public:
    string functionName() { 
        ll n;
        cin>>n;
        if(mp[n]) return "YES";
        else return "NO";
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    for (ll i = 2; i <= N; i++){
        ll val=1, sum=1, cnt=1;
        while (val<=N){
            if(cnt>=3) mp[sum] = true;
            val *= i;
            sum += val;
            cnt++;
        }
    }
    while(t--){
        Solution ob;
        cout<<ob.functionName()<<"\n";
        // ob.functionName();
    }
    return 0;
}