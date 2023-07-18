// https://www.codechef.com/problems/TOP10
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string checkTopTen() { 
        int rank;
        cin >> rank;
        if (rank <= 10) return "YES";
        else return "NO";
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.checkTopTen()<<"\n";
    }
    return 0;
}