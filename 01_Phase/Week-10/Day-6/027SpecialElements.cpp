// https://codeforces.com/contest/1352/problem/E
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
        int n, sum, ans=0;
        cin >> n;
        vector<int> arr(n), freq(n+1);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            sum = 0;
            for (int j = i; j < n; j++){
                sum += arr[j];
                if(i==j) continue;
                if(sum<=n) freq[sum]=1;
            }
        }
        for (int i = 0; i < n; i++) {
            if(freq[arr[i]]) ans++;
        }
        return ans;
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