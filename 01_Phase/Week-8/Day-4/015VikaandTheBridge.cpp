// https://codeforces.com/problemset/problem/1848/B
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    int calculateMinCrossings() { 
        int n, k;
        cin >> n >> k;
        int minMaxPlanks = INT_MAX;
        vector<vector<int>> plankColors(k + 1);
        int startPlank = 0, endPlank = n + 1;
        for (int i = 1; i <= n; i++) {
            int color;
            cin >> color;
            plankColors[color].push_back(i);
        }
        for (int color = 1; color <= k; color++) {
            plankColors[color].push_back(endPlank);
        }
        for (int color = 1; color <= k; color++) {
            int count = 0, prevPlank;
            vector<int> plankGaps;            
            for (auto plank : plankColors[color]) {
                if (count == 0) {
                    plankGaps.push_back(plank - startPlank - 1);
                    count++;
                } else {
                    plankGaps.push_back(plank - prevPlank - 1);
                }
                count++;
                prevPlank = plank;
            }
            sort(plankGaps.rbegin(), plankGaps.rend());
            plankGaps[0] /= 2;
            sort(plankGaps.rbegin(), plankGaps.rend());
            minMaxPlanks = min(minMaxPlanks, plankGaps[0]);
        }
        return minMaxPlanks;
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
        cout<<ob.calculateMinCrossings()<<"\n";
    }
    return 0;
}