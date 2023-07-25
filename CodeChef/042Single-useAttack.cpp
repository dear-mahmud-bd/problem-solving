// https://www.codechef.com/problems/SINGLEUSE
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minimumAttacks() { 
        int H, X, Y;
        cin >> H >> X >> Y;
        if (Y >= H) {
            return 1;
        } else {
            int remainingHealth = H-Y;
            int normalAttacks = ceil((double)remainingHealth / X);
            return 1 + normalAttacks; 
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
        cout<<ob.minimumAttacks()<<"\n";
    }
    return 0;
}