// https://codeforces.com/contest/1592/problem/B
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
    string functionName() { 
        int n, k;
        cin>>n>>k;
        vector<int>arr(n), cpy(n);
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        if(n >= 2*k) return "YES";
        cpy=arr;
        sort(cpy.begin(), cpy.end());
        for (int i = n-k; i < k; i++){
            if(arr[i] != cpy[i]) return "NO";
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
        cout<<ob.functionName()<<"\n";
        // ob.functionName();
    }
    return 0;
}