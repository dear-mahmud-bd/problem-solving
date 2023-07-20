// https://www.codechef.com/problems/ABPLUSC
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void findTriplet() { 
        ll X, limit=1e6;
        cin>>X;
        if (X == 1)  cout<<-1<<"\n";
        else if (X <= limit) cout<<1<<" "<<X - 1<<" "<<1<<"\n";
        else {
            ll a = limit, b = X/a, c = X%a;
            if (c == 0) cout<<a<<" "<<b - 1<<" "<<limit<<"\n";
            else cout<<a<<" "<<b<<" "<<c<<"\n";
        }
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.findTriplet();
    }
    return 0;
}