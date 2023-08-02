// https://codeforces.com/contest/1629/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int getMaxRAM() { 
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i].first;
        }
        for (int i = 0; i < n; i++) {
            cin >> ar[i].second;
        }
        sort(ar.begin(), ar.end());
        int maxRAM = k;
        for (int i = 0; i < n; i++) {
            if (ar[i].first <= maxRAM) {
                maxRAM += ar[i].second;
            }
        }
        return maxRAM;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.getMaxRAM()<<"\n";
    }
    return 0;
}