// https://www.codechef.com/problems/FOODPLAN
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string cheaperOption() {
        float onlineCost, diningCost;
        cin >> onlineCost >> diningCost;
        float discountedOnlineCost = onlineCost - (onlineCost * 10 / 100);
        if (discountedOnlineCost < diningCost) {
            return "ONLINE";
        } else if (discountedOnlineCost > diningCost) {
            return "DINING";
        } else {
            return "EITHER";
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
        cout<<ob.cheaperOption()<<"\n";
    }
    return 0;
}