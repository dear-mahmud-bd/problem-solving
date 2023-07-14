// https://codeforces.com/contest/1690/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void functionName() { 
        int n;
        cin >> n;
        vector<int> startTimes(n), endTimes(n), durations(n);
        for (int i = 0; i < n; i++) {
            cin >> startTimes[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> endTimes[i];
        }
        int upper;
        for (int i = 0; i < n; i++) {
            if(i==0){
                cout<<abs(startTimes[i]-endTimes[i])<<" ";
                upper = endTimes[i];
            }else{
                upper = max(endTimes[i-1], startTimes[i]);
                cout<<abs(upper-endTimes[i])<<" ";
            }
        }
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.functionName();
        cout<<"\n";
    }
    return 0;
}