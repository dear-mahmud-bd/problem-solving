// https://codeforces.com/contest/1702/problem/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int howManyDay() { 
        string s;
        cin >> s;
        int n = s.length();
        int days = 1;
        set<char>chSet;
        for (int i = 0; i < n; i++) {
            chSet.insert(s[i]);
            if(chSet.size()>3){
                days++;
                chSet.clear();
                i--;
            }
        }
        return days;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.howManyDay()<<"\n";
    }
    return 0;
}