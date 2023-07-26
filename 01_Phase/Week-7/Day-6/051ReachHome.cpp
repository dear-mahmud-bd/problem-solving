// https://www.codechef.com/problems/REACH_HOME
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string canReachHome() { 
        int fuel, distance;
        cin >> fuel >> distance;
        if (fuel*5 >= distance) return "YES";
        else return "NO";
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
        cout<<ob.canReachHome()<<"\n";
    }
    return 0;
}