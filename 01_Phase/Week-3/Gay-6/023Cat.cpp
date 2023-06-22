// https://codeforces.com/contest/1800/problem/A
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isCatMeowing(string str, int n) { 
        for (char& c : str) {
            c = toupper(c);
        }
        string ans="", cat="MEOW";
        for (int i=0; i<n; i++){
            if(ans.size()==0) ans +=str[i];
            else if(str[i-1]==str[i]) continue;
            else ans += str[i];
        }
        return ans==cat;
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (ob.isCatMeowing(s, n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}