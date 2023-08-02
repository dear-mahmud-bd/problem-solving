// https://codeforces.com/contest/1675/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string canBuyFood() { 
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        x -= a, y -= b;
        x = max(x, 0), y = max(y,0);
        if(x + y <= c){
            return "YES";
        }
        return "NO";
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.canBuyFood()<<"\n";
    }
    return 0;
}