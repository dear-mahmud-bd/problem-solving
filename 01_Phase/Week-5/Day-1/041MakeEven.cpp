// https://codeforces.com/contest/1611/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int howManyOperation() { 
        string str;
        cin >> str;
        bool flag = false;
        for (auto ch: str) {
            if ((ch-'0')%2 == 0) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            return -1;
        }
        if ((str.back()-'0')%2 == 0){
            return 0;
        } else {
            if ((str.front()-'0')%2 == 0) return 1;
            else return 2;
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
        cout<<ob.howManyOperation()<<"\n";
    }
    return 0;
}