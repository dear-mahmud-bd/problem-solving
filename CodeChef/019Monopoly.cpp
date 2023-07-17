// https://www.codechef.com/problems/MONOPOLY2
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string isMonopoly() { 
        int p, q, r, s;
        cin >> p >> q >> r >> s;
        int totalProfit = p + q + r + s;
        int maxProfit = max({p, q, r, s});
        if (maxProfit > totalProfit-maxProfit) {
            return "YES";
        } else {
            return "NO";
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
        cout<<ob.isMonopoly()<<"\n";
    }
    return 0;
}