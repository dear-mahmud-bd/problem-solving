// https://codeforces.com/problemset/problem/1517/C
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
        int n, diagonal;
        cin >> n;
        vector<vector<int>> ans(n, vector<int>(n, -1));
        for (int i = 0; i < n; i++) {
            cin>>diagonal;
            int row=i, col=i;
            for (int j = 0; j < diagonal; j++) {
                ans[row][col] = diagonal;
                if (col>0 && ans[row][col-1]==-1) col--;
                else row++;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
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
        ob.functionName();
    }
    return 0;
}