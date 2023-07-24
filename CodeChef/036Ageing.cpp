// https://www.codechef.com/problems/AGEING
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int calculateChefinaAge() {
        int x;
        cin>>x;
        return x - 10;
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
        cout<<ob.calculateChefinaAge()<<"\n";
    }
    return 0;
}