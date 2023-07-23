// https://www.codechef.com/problems/CANDYSTORE
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int functionName() { 
        int x, y;
        cin >> x >> y;
        if (y <= x) {
            return y; 
        } else {
            return x+(2*(y-x)); 
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
        cout<<ob.functionName()<<"\n";
    }
    return 0;
}