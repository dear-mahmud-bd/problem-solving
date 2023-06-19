// https://codeforces.com/contest/1790/problem/C
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void premutation() { 
        int n;
        cin >> n;
        vector<int> perm;
        unordered_set<int> seen;
        for (int i=0; i<n; i++) {
            vector<int> sqnc(n - 1);
            for (int j=0; j<n-1; j++) {
                cin >> sqnc[j];
                seen.insert(sqnc[j]);
            }
            for (int k=1; k<=n; k++) {
                if (seen.find(k) == seen.end()) {
                    perm.push_back(k);
                    break;
                }
            }
        }
        for (int i=0; i<n; i++) {
            cout<<perm[i]<<" ";
        }
        cout<<"\n";
        return ;
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.premutation();
    }
    return 0;
}