// https://codeforces.com/contest/1744/problem/A
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string canGetString() {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        string s;
        cin >> s;
        unordered_map<int, char> mp;
        for (int i = 0; i < n; i++) {
            if (mp.find(a[i]) == mp.end()) {
                mp[a[i]] = s[i];
            } else if (mp[a[i]] != s[i]) {
                return "NO";
            }
        }
        return "YES";
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.canGetString()<<"\n";
    }
    return 0;
}