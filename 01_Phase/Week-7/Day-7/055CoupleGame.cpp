// https://www.codechef.com/problems/COUGAME
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minBoysNotParticipating() { 
        int G, B;
        cin >> G >> B;
        return B-G;
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
        cout<<ob.minBoysNotParticipating()<<"\n";
    }
    return 0;
}