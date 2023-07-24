// https://www.codechef.com/problems/ONEORTWO
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string determineWinner() { 
        int x, y;
        cin >> x >> y;
        if (x>y && x-y>=2) return "CHEF";
        else if (x<y && y-x>=2) return "CHEFINA";
        else if (min(x,y)%2==0) return "CHEFINA";
        else return "CHEF";
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
        cout<<ob.determineWinner()<<"\n";
    }
    return 0;
}