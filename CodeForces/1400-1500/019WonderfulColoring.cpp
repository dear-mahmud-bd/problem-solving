// https://codeforces.com/problemset/problem/1551/B2
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
        int n, k;
        cin >> n >> k;
        vector<vector<int>> colorIndices(n + 1);
        for (int i = 1; i <= n; i++) {
            int element;
            cin >> element;
            colorIndices[element].push_back(i);
        }
        vector<int> coloring(n+1, 0), paintOrder;
        for (int i = 1; i <= n; i++) {
            int sz = colorIndices[i].size();
            for (int j = 0; j < min(sz, k); j++) {
                paintOrder.push_back(colorIndices[i][j]);
            }
        }
        while (paintOrder.size()%k != 0) {
            paintOrder.pop_back();
        }
        for (int i = 0; i < paintOrder.size(); i++) {
            coloring[paintOrder[i]] = (i%k) + 1;
        }
        for (int i = 1; i <= n; i++) {
            cout << coloring[i] << ' ';
        }
        cout << "\n";
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
        ob.functionName();
    }
    return 0;
}
        // for (auto pos : arr) {
        //     cout<<pos<<" ";
        // }
        // cout<<"\n";
        // return;