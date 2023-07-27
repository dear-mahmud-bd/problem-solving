// https://www.codechef.com/problems/BUDTECH
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int maxAmountForOtherEvents() { 
        int R;
        cin >> R;
        return R*100;
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
        cout<<ob.maxAmountForOtherEvents()<<"\n";
    }
    return 0;
}