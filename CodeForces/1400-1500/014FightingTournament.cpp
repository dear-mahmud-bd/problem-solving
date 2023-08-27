// https://codeforces.com/problemset/problem/1719/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void winningNum() { 
        int n, q, mxStrIdx;
        cin>>n>>q;
        vector<int>strengths(n);
        for (int i = 0; i < n; i++){
            cin>>strengths[i];
            if(strengths[i] == n) mxStrIdx = i;
        }
        map<int,pair<int,int>> wins;
        int left=0, right=1, round=1;
        while (right < n){
            if(strengths[left]<strengths[right]){
                left=right;
                wins[right].first++;
                wins[right].second = round;
            } else {
                wins[left].first++;
                wins[left].second = round;
            }
            right++, round++;
        }
        while (q--) {
            int athlet, rounds;
            cin >> athlet >> rounds;
            athlet--; 
            int roundReqToWin = wins[athlet].second;
            if (wins[athlet].first == 0) {
                cout << 0 << "\n";
            } else if (rounds >= roundReqToWin) {
                int additionalWins = (athlet == mxStrIdx) ? (rounds - roundReqToWin) : 0;
                cout << wins[athlet].first + additionalWins << "\n";
            } else {
                int diff = roundReqToWin - rounds;
                cout << max(0, wins[athlet].first - diff) << "\n";
            }
        }
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
        ob.winningNum();
    }
    return 0;
}