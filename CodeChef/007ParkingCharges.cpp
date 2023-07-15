// https://www.codechef.com/problems/PARKINGCHARG
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int totalCharg() { 
        int X, Y, H;
        cin >> X >> Y >> H;
        int charge_first_hour = X;
        int charge_extra_hours = (H - 1) * Y;
        int total_charges = charge_first_hour + charge_extra_hours;
        return total_charges;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.totalCharg()<<"\n";
    }
    return 0;
}