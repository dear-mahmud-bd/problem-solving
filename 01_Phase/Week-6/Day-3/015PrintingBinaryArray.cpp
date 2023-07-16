// https://www.codechef.com/problems/PRINTINGBIN?tab=statement
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void printBinary() { 
        int n, binary;
        cin>>n;
        for (int i = 0; i < n; i++){
            cin>>binary;
            if(binary==0) cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<"\n";
        return;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.printBinary();
    }
    return 0;
}