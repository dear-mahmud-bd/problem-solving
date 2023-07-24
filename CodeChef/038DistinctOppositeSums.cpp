// https://www.codechef.com/problems/DISTOPPSUMS
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void generatePermutation() { 
        int n;
        cin >> n;
        for (int i=n-1; i>=1; i-=2) {
            cout<<i<<" ";
        }
        for (int i=2; i<=n; i+=2) {
            cout<<i<<" ";
        }
        cout<<"\n";
        return ;
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
        ob.generatePermutation();
    }
    return 0;
}