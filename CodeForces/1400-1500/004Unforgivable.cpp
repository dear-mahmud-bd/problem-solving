// https://codeforces.com/contest/1800/problem/E1
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    string canTransform() { 
        int n, k;
        string s, t;
        cin >> n >> k >> s >> t;
        vector<int>freqS(26),freqT(26);
        for (int i = 0; i < n; i++){
            freqS[s[i]-'a']++;
            freqT[t[i]-'a']++;
        }
        for (int i = 0; i < 26; i++){
            if(freqS[i]!=freqT[i]) return "NO";
        }
        for (int i = 0; i < n; i++) {
            if (i<k && n-i<k+1 && s[i]!=t[i]) {
                return "NO";
            }
        }
        return "YES";
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
        cout<<ob.canTransform()<<"\n";
    }
    return 0;
}