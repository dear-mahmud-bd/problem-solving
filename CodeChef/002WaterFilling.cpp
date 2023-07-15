// https://www.codechef.com/problems/WATERFILLING
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string fillWaterBottles(int b1, int b2, int b3) {
        if (b1==0 && b2==0 || b2==0 && b3==0 || b3==0 && b1==0) {
            return "Water filling time";
        } else {
            return "Not now";
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
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        cout<<ob.fillWaterBottles(b1, b2, b3)<<"\n";
    }
    return 0;
}