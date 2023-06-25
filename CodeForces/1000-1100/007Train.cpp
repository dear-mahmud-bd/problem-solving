// https://codeforces.com/contest/1702/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void isPossible() { 
        int n, k;
        cin >> n >> k;
        vector<int> route(n);
        for (int i = 0; i < n; i++) {
            cin >> route[i];
        }
        vector<pair<int, int>> queries(k);
        for (int i = 0; i < k; i++) {
            cin >> queries[i].first >> queries[i].second;
        }
        unordered_map<int, int> stationIndex;
        for (int i = 0; i < n; i++) {
            if (stationIndex.count(route[i]) == 0) {
                stationIndex[route[i]] = i;
            }
        }

        for (int i = 0; i < k; i++) {
            int a = queries[i].first;
            int b = queries[i].second;
            int indexA = stationIndex[a];
            int indexB = stationIndex[b];
            if (stationIndex.count(a) == 0 || stationIndex.count(b) == 0) {
                cout<< "NO\n";
            } else if (indexA > indexB) {
                cout<< "NO\n";
            }else{
                cout<< "YES\n";
            }
        }

    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.isPossible();
    }
    return 0;
}