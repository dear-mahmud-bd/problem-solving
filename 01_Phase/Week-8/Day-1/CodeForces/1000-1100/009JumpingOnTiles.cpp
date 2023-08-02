// https://codeforces.com/contest/1729/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution {
public:
    void minCostWithMaxJump() {
        string str;
        cin >> str;
        int sz = str.size(), cost = 0, visit = 0;
        vector<vector<int>> indices(26);
        vector<int> arr;
        for (int i = 0; i < str.size(); i++) {
            indices[str[i] - 'a'].push_back(i);
        }
        if (str[0] < str[sz - 1]) {
            for (int i = str[0]-'a'; i <= str[sz-1]-'a'; i++) {
                int s = indices[i].size();
                visit += s;
                for (int j = 0; j < s; j++) {
                    arr.push_back(indices[i][j]);
                }
            }
        } else {
            for (int i = str[0]-'a'; i >= str[sz-1]-'a'; i--) {
                int s = indices[i].size();
                visit += s;
                for (int j = 0; j < s; j++) {
                    arr.push_back(indices[i][j]);
                }
            }
        }
        cost = abs(str[sz-1] - str[0]);
        cout<<cost<<" "<<visit<<"\n";
        for (int i = 0; i < visit; i++) {
            cout<< arr[i]+1 <<" ";
        }
        cout<<"\n";
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        ob.minCostWithMaxJump();
    }
    return 0;
}