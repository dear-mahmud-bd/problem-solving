// https://codeforces.com/problemset/problem/817/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    ll sum(ll num){
        ll sum=0;
        while (num != 0){
            sum += num%10;
            num /= 10;
        }
        return sum;
    }
    ll functionName() { 
        ll n, s;
        cin>>n>>s;
        ll l=1, r=n;
        while (l <=  r){
            ll mid = l + (r-l)/2;
            if(mid-sum(mid) >= s) r = mid-1;
            else l = mid+1; // really big (diff !< s)
        }
        return n-l+1;
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
        cout<<ob.functionName()<<"\n";
        // ob.functionName();
    }
    return 0;
}