// https://codeforces.com/contest/1365/problem/C
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
        int n, x;
        cin >> n;
        vector<int> permutationA(n + 1);
        map<int, int> positionsA;
        for (int i = 0; i < n; i++) {
            cin >> x;
            permutationA[x] = i + 1; 
        }
        for (int i = 0; i < n; i++) {
            cin >> x;
            int relativePosition = permutationA[x] - (i + 1);
            if (relativePosition < 0) {
                relativePosition += n; 
            }
            positionsA[relativePosition]++; 
        }
        int maxMatchingPairs = 1; 
        for (auto it : positionsA) {
            maxMatchingPairs = max(maxMatchingPairs, it.second);
        }
        cout << maxMatchingPairs << "\n";
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