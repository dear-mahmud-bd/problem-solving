// https://codeforces.com/contest/1702/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int howManyDigit(int num){
        int digit=0;
        while (num!=0){
            num /= 10;
            digit++;
        }
        return digit-1;
    }
    int roundNumber() { 
        int n;
        cin>>n;
        int number = howManyDigit(n);
        return n-pow(10,number);
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.roundNumber()<<"\n";
    }
    return 0;
}