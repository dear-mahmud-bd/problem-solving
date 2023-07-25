// https://www.codechef.com/problems/ONEMORE
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string isFinishedEpisod() { 
        int X;
        cin >> X;
        if (X > 24) return "Yes";
        else return "No";
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
        cout<<ob.isFinishedEpisod()<<"\n";
    }
    return 0;
}