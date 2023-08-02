// https://codeforces.com/contest/1714/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string variedNumber() { 
        int s;
        cin>>s;
        string num="";
        for (int digit=9; digit>0; digit--){
            if(s >= digit){
                num = to_string(digit)+num;
                s -= digit;
            }
        }
        return num;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.variedNumber()<<"\n";
    }
    return 0;
}