// https://www.codechef.com/problems/CANDIVIDE
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string canDistributeCandies() { 
        int candies;
        cin>>candies;
        if (candies%3 == 0) return "YES";
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
        cout<<ob.canDistributeCandies()<<"\n";
    }
    return 0;
}