// https://codeforces.com/contest/1850/problem/F
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    ll maxFrogsCaught() { 
        int n, hop;
        cin >> n; 
        vector<int> hop_lengths(n+4);
        for (int i = 0; i < n; i++) {
            cin>>hop;
            if(hop<=n) hop_lengths[hop]++; 
        }
        for (int i = n; i >= 1; i++){
            for (int j = i; j <= n; j+=i){
                hop_lengths[j] += hop_lengths[i];
            }
        }
        int maxElement = hop_lengths[0];
        for (int i = 1; i < n; i++) {
            if (hop_lengths[i] > maxElement) {
                maxElement = hop_lengths[i];
            }
        }
        return maxElement;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.maxFrogsCaught()<<"\n";
    }
    return 0;
}