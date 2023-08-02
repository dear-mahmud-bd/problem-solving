// https://codeforces.com/contest/1790/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution {
    public:
    void permutation() {
        int n;
        cin >> n;
        vector<vector<int>> seq(n+1, vector<int>(n));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < n; j++) {
                cin >> seq[i][j];
            }
        }
        int s = seq[1][1];
        if (s != seq[2][1]) s = seq[3][1];
        cout << s << " ";
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < n; j++) {
                if (seq[i][1] != s) cout << seq[i][j] << " ";
            }
        }
        cout << "\n";
        return;
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        ob.permutation();
    }
    return 0;
}