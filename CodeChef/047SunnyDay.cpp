// https://www.codechef.com/problems/SUNNYDAY
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string willGoToPicnic() {
        int temperature;
        cin >> temperature;
        if (temperature > 24) return "YES";
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
        cout<<ob.willGoToPicnic()<<"\n";
    }
    return 0;
}