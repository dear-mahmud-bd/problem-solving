// https://www.codechef.com/problems/GDTURN
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string isGoodTurn() { 
        int x, y;
        cin >> x >> y;
        if (x+y > 6) {
            return "YES";
        } else {
            return "NO";
        }
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
        cout<<ob.isGoodTurn()<<"\n";
    }
    return 0;
}