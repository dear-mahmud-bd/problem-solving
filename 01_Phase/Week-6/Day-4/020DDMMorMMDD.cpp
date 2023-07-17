// https://www.codechef.com/problems/DDMMORMMDD
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string identifyDateFormat() { 
        string date;
        cin >> date;
        int day = stoi(date.substr(0, 2));
        int month = stoi(date.substr(3, 2));
        int year = stoi(date.substr(6, 4));
        if (day <= 12 && month > 12) {
            return "MM/DD/YYYY";
        } else if (day > 12 && month <= 12) {
            return "DD/MM/YYYY";
        } else {
            return "BOTH";
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
        cout<<ob.identifyDateFormat()<<"\n";
    }
    return 0;
}