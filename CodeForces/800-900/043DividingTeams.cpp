// https://codeforces.com/contest/1249/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minTeams() { 
        int n;
        cin >> n;
        vector<int> skills(n);
        for (int i = 0; i < n; i++) {
            cin >> skills[i];
        }
        bool twoTeam = false;
        sort(skills.begin(), skills.end());
        for (int i = 0; i < n - 1; i++){
            if (skills[i]+1 == skills[i+1]){
                twoTeam = true;
                break;
            }
        }
        return twoTeam? 2:1;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.minTeams()<<"\n";
    }
    return 0;
}