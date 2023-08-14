// https://codeforces.com/problemset/problem/1766/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    string canPaint() { 
        int m, approach1 = 1, approach2 = 1;
        string rowA, rowB;
        cin >> m >> rowA >> rowB;
        for (int i = 0; i < m; i++) {
            if (rowA[i]=='B' && rowB[i]=='B') {
                swap(approach1, approach2);
            } else if (rowA[i]=='B' && rowB[i]=='W') {
                approach2 = 0;
            } else if (rowA[i]=='W' && rowB[i]=='B') {
                approach1 = 0;
            } else {
                return "NO";
            }
        }
        return (approach1||approach2) ? "YES":"NO";
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
        cout<<ob.canPaint()<<"\n";
    }
    return 0;
}