// https://www.codechef.com/problems/RETURNCHANGE
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int howRipes() { 
        int x;
        cin >> x;
        int nearestMultipleOf10 = ((x+5)/10)*10;
        int amountReturned = 100 - nearestMultipleOf10;
        return amountReturned;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.howRipes()<<"\n";
    }
    return 0;
}