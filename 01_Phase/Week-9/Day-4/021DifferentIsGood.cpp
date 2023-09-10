// https://codeforces.com/problemset/problem/672/B
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    int functionName() { 
        int n, count=0;
        string str;
        cin >> n >> str;
        if(n>26) return -1;
        vector<int>freq(26);
        for (int i = 0; i < n; i++){
            freq[str[i]-'a']++;
        }
        for (int i = 0; i < 26; i++){
            if(freq[i] > 1) count += (freq[i]-1);
        }
        return count;
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
        cout<<ob.functionName()<<"\n";
    }
    return 0;
}