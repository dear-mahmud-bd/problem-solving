// https://www.codechef.com/problems/FAVOURITENUM?tab=statement
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string whoTakes() { 
        int A;
        cin >> A;
        if (A%2==0 && A%7==0) {
            return "Alice";
        } else if (A%2!=0 && A%9==0) {
            return "Bob";
        } else {
            return "Charlie";
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
        cout<<ob.whoTakes()<<"\n";
    }
    return 0;
}