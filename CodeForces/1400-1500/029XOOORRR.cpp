// https://codeforces.com/problemset/problem/1516/B
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
        int n, jor=0, tmp=0, cnt=0;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++){
            cin>>arr[i];
            jor ^= arr[i];
        }
        if(jor==0) return "YES";
        for (int i = 0; i < n; i++){
            tmp ^= arr[i];
            if(tmp==jor){
                tmp = 0;
                cnt++;
            }
        }
        return cnt>1 ? "YES":"NO";
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