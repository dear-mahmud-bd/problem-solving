// https://codeforces.com/contest/1800/problem/B
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int numOfPairs() {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int pairs = 0;
        int lowerFreq[26] = {0};
        int upperFreq[26] = {0};
        for (int i=0; i<n; i++) {
            if ('a'<=str[i] && str[i]<='z') {
                lowerFreq[str[i]-'a']++;
            } else {
                upperFreq[str[i]-'A']++;
            }
        }
        for (int i=0; i<26; i++) {
            int pair = min(lowerFreq[i], upperFreq[i]);
            pairs += pair;
            if (k > 0) {
                int possiblePair = abs(lowerFreq[i] - upperFreq[i]) / 2;
                pairs += min(possiblePair, k);
                k -= possiblePair;
            }
        }
        return pairs;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.numOfPairs() << "\n";
    }   
    return 0;
}