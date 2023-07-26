// https://www.codechef.com/problems/MAXCAP
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string canAllFriendsUseLift() { 
        int frndNum, wtPerFrnd;
        cin >> frndNum >> wtPerFrnd;
        if(frndNum>8) return "NO";
        else if (frndNum*wtPerFrnd <= 500) return "YES";
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
        cout<<ob.canAllFriendsUseLift()<<"\n";
    }
    return 0;
}