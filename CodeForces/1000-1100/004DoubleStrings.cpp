// https://codeforces.com/contest/1703/problem/D
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string stringMatch() {
        int n;
        cin >> n;
        string result="";
        vector<string> words(n);
        unordered_set<string> wordsSet;
        // set<string> wordsSet;
        for (int i = 0; i < n; i++){
            cin>>words[i];
            wordsSet.insert(words[i]);
        }
        for (int i = 0; i < n; i++) {
            bool found = false;
            for (int j = 1; j < words[i].size(); j++) {
                if (wordsSet.count(words[i].substr(0,j)) && wordsSet.count(words[i].substr(j))) {
                    found = true;
                    break;
                }
            }
            result += (found ? '1' : '0');
        }
        return result;
    }
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.stringMatch()<<"\n";
    }
    return 0;
}