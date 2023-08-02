// https://codeforces.com/contest/1702/problem/D
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string removeCharacters() {
        string s, w, result="";;
        cin >> s;
        w = s;
        int p;
        cin >> p;
        int cost = 0;
        sort(w.rbegin(), w.rend());
        for (int i=0; i<s.length(); i++){
            cost += w[i]-'a'+1;
        }
        unordered_map<char, int> mp;
        for (int i=0; i<w.length(); i++) {
            if (cost > p) {
                mp[w[i]]++;
                cost -= w[i]-'a'+1;
            }
        }
        for (int i=0; i<s.length(); i++) {
            if (mp[s[i]] > 0) {
                mp[s[i]]--;
                continue;
            }
            result += s[i];
        }
        return result;
    }
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.removeCharacters()<<"\n";
    }
    return 0;
}