// https://codeforces.com/contest/1706/problem/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 1e5+5;
ll arr[N], dp[2][N];
class Solution{
    public:
    ll calculateDifference(int idx) {
        return max(0ll, max(arr[idx-1],arr[idx+1])+1 - arr[idx]);
    }
    ll numOfAdditionalFloors() { 
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            dp[0][i] = 0;
            dp[1][i] = 0;
        }
        if (n & 1) {
            ll ans = 0;
            for (int i = 1; i < n-1; i += 2) {
                ans += calculateDifference(i);
            }
            return ans;
        } else {
            ll ans1=0, ans2=0, ans3=INT64_MAX, temp0=0, temp1=0;
            for (int i = 1; i < n-1; i += 2) {
                ans1 += calculateDifference(i);
                dp[0][i] = ans1;
            }
            for (int i = 2; i < n-1; i += 2) {
                ans2 += calculateDifference(i);
                dp[0][i] = ans2;
            }
            for (int i = n-2; i > 0; i -= 2) {
                temp0 += calculateDifference(i);
                dp[1][i]=temp0;
                temp1 += calculateDifference(i-1);
                dp[1][i-1]=temp1;
            }
            for (int i = 2; i < n-3; i++){
                if( (i/2)+((n-i-2)/2) == ((n-2)/2) ){
                    ans3 = min(ans3, dp[0][i-1]+dp[1][i+2]);
                }
            }
            return min({ans1, ans2, ans3});
        }
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
        cout<<ob.numOfAdditionalFloors()<<"\n";
    }
    return 0;
}