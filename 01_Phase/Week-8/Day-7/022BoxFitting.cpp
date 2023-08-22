// https://codeforces.com/problemset/problem/1498/B
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    int calculateMinHeight() { 
        int n, W, currHeight = 1;
        cin >> n >> W;
        vector<int> recWidths(n);
        for (int i = 0; i < n; i++) {
            cin >> recWidths[i]; 
        }
        sort(recWidths.begin(), recWidths.end(), greater<int>());
        priority_queue<int> pq;
        pq.push(W);
        for (int i = 0; i < n; i++) {
            if(pq.top() >= recWidths[i]){
                int width = pq.top();
                pq.pop();
                width -=  recWidths[i];
                pq.push(width);
            }else{
                pq.push(W-recWidths[i]);
                currHeight++;
            }
        }
        return currHeight;
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
        cout<<ob.calculateMinHeight()<<"\n";
    }
    return 0;
}