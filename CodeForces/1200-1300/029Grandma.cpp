// https://codeforces.com/contest/1582/problem/C
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
        int n, ans = INT_MAX;
        string s;
        cin>>n>>s;
        for(int i = 'a'; i <= 'z'; i++){
            int change = 0, l = 0, r = n-1;
            while(l<=r){
                if(s[l] != s[r]){
                    if(s[l] == i){
                        change++;
                        l++;
                    } else if (s[r] == i){
                        change++;
                        r--;
                    } else {
                        change = INT_MAX;
                        break;
                    }
                } else {
                    l++;
                    r--;
                }
            }
            ans = min(ans, change);
            // cout<<ans<<" ";
        }
        return (ans == INT_MAX)? -1:ans;
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