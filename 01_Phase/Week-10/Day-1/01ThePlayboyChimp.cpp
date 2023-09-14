// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void functionName() { 
        int n, q, x;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        cin>>q;
        while (q--){
            cin >> x;
            auto it1 = lower_bound(arr.begin(), arr.end(), x);
            auto it2 = upper_bound(arr.begin(), arr.end(), x);
            int idx1 = it1-arr.begin(), idx2 = it2 - arr.begin();
            if (idx1 == 0) cout << "X ";
            else cout << arr[idx1 - 1] << " ";
            if (idx2 == n) cout << "X" << "\n";
            else cout << arr[idx2] << "\n";
        }
        return ;
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
        // cout<<ob.functionName()<<"\n";
        ob.functionName();
    }
    return 0;
}