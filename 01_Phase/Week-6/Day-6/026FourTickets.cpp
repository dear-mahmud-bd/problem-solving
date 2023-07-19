// https://www.codechef.com/problems/FOURTICKETS
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string willAttendConcert() { 
        int X;
        cin >> X;
        return (X*4 <= 1000) ? "YES":"NO";
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.willAttendConcert()<<"\n";
    }
    return 0;
}