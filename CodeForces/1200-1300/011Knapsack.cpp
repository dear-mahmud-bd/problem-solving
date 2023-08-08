// https://codeforces.com/problemset/problem/1446/A
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void knapsack() { 
        ll n, W;
        cin >> n >> W;
        vector<pair<int, int>> items(n);
        for (int i = 0; i < n; ++i) {
            cin >> items[i].first;
            items[i].second = i+1;
        }
        sort(items.begin(), items.end());
        ll half = (W+1)/2, ttlWeg = 0;
        vector<int>idx;
        for (int i = n-1; i >= 0; i--){
            if(items[i].first>W || ttlWeg+items[i].first>W){
                continue;
            }else{
                ttlWeg += items[i].first;
                idx.push_back(items[i].second);
            }
        }
        if(ttlWeg < half){
            cout<<-1<<"\n";
            return;
        }
        cout<<idx.size()<<"\n";
        for (int i=idx.size()-1; i>=0; i--){
            cout<<idx[i]<<" ";
        }
        cout<<"\n";
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
        ob.knapsack();
    }
    return 0;
}