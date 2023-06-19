// https://codeforces.com/contest/1790/problem/A
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int correctDigit() { 
        int count=0;
        string pi="3141592653589793238462643383279", inpPI;
        cin>>inpPI;
        for (int i=0; i<inpPI.size(); i++){
            if(pi[i]==inpPI[i]) count++;
            else break;
        }
        return count;
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.correctDigit()<<"\n";
    }
    return 0;
}