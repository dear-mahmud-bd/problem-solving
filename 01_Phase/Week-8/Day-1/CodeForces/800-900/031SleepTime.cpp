// https://codeforces.com/contest/1714/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void sleepingTime() { 
        int n, H, M, hi, mi;
        cin >> n >> H >> M;
        int bedTimeMinutes = (H*60) + M;
        int minDiff = INT_MAX;
        while (n--) {
            cin >> hi >> mi;
            int alarmMinutes = (hi*60) + mi;
            if (alarmMinutes < bedTimeMinutes){
                alarmMinutes += 24*60;
            } 
            minDiff = min(minDiff, alarmMinutes-bedTimeMinutes);
        }
        cout<< minDiff/60 <<" "<< minDiff%60 <<"\n";
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
        ob.sleepingTime();
    }
    return 0;
}