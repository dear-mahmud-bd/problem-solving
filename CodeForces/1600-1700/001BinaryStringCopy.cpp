// https://codeforces.com/contest/1849/problem/C
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
        int n, m;
        string str;
        cin >> n >> m >> str;
        str = '*'+str;
        vector<int>before0(n+2), before1(n+2), after0(n+2), after1(n+2);
        for (int i = 1; i <= n; i++){
            if(str[i]=='0') before0[i+1] = before0[i] + 1;
            if(str[i]=='1') before1[i+1] = before1[i] + 1;
        }
        for (int i = n; i > 0; i--){
            if(str[i]=='0') after0[i-1] = after0[i] + 1;
            if(str[i]=='1') after1[i-1] = after1[i] + 1;
        }
        set<pair<int, int>> uniqueStrings;
        while (m--) {
            int l, r;
            cin >> l >> r;
            int leftPtr = l - before0[l];
            int rightPtr = after1[r] + r;
            int checkSorted = after0[l-1] + before1[r+1];
            if (checkSorted >= r-l+1) {
                uniqueStrings.insert({-1, -1});
            } else {
                uniqueStrings.insert({leftPtr, rightPtr});
            }
        }
        cout << uniqueStrings.size() << "\n";
        return;
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
        // cout<<ob.functionName()<<"\n";
        ob.functionName();
    }
    return 0;
}