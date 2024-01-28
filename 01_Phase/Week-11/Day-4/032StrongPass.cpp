// https://codeforces.com/contest/1845/problem/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
const int MOD = 1e9+7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    string functionName() { 
        string s, l, r;
        int m, idx=-1;
        cin >> s >> m >> l >> r;
        vector<int>arr[10];
        for (int i = 0; i < s.length(); i++) {
            arr[s[i]-'0'].push_back(i);
        }
        for (int i = 0; i < 10; i++) {
            arr[i].push_back(s.length());
        }
        for(int i = 0; i < m; i++){
            int low = l[i]-'0';
            int high = r[i]-'0';
            int newIdx=0;
            // cout<< "\nValue: " << i << ",\n";
            for(int j = low; j <= high; j++){
                int id = upper_bound(arr[j].begin(), arr[j].end(), idx) - arr[j].begin();
                // cout<< "id: " << id <<", Arr: "<< arr[j][id] << "\n";
                if(arr[j][id] == s.length()) return "YES";
                else newIdx = max(newIdx, arr[j][id]);
                // cout<< "idx: " << idx <<", NewIdx: "<< newIdx << "\n";
            }
            idx = newIdx;
        }
        return "NO";
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
        cout<<ob.functionName()<<"\n";
        // ob.functionName();
    }
    return 0;
}