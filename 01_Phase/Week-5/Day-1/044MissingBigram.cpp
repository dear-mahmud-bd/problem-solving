// https://codeforces.com/contest/1618/problem/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;    
class Solution {
    public:
    string generateWord() {
        int n;
        cin >> n;
        vector<string> bigrams(n-2);
        for (int i=0; i<n-2; i++) {
            cin >> bigrams[i];
        }
        string word="";
        for (int i=0; i<n-3; i++) {
            word += bigrams[i][0];
            if(bigrams[i][1] != bigrams[i+1][0]){
                word += bigrams[i][1];
            }
        }
        word += bigrams[n-3];
        if(word.size()<n){
            word += bigrams[n-3][1];
            return word;
        } else {
            return word;
        } 
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout<<ob.generateWord()<<"\n";
    }
    return 0;
}
