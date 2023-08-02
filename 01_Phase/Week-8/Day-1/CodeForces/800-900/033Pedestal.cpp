// https://codeforces.com/contest/1690/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void pedestal() { 
        int n;
        cin>>n;
        int h2 = (n/3) - 1;
        int h1 = (n/3) - 1;
        int h3 = (n/3) - 1;
        if (n%3 == 2) {
            cout<< h2+2 <<" "<< h1+3 <<" "<< h3 <<"\n";
        } else if (n % 3 == 1) {
            cout<< h2+1 <<" "<< h1+3 <<" "<< h3 <<"\n";
        } else {
            cout<< h2+1 <<" "<< h1+2 <<" "<< h3 <<"\n";
        }
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.pedestal();
    }
    return 0;
}