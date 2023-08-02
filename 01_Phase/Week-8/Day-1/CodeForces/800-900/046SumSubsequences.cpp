// https://codeforces.com/contest/1618/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void restoreArray() { 
        vector<int> b(7);
        for (int i = 0; i < 7; i++) {
            cin >> b[i];
        }
        for (int i=0; i<7; i++) {
            for (int j=i+1; j<7; j++) {
                for (int k=j+1; k<7; k++){
                    if(b[i]+b[j]+b[k]==b[6]){
                        cout<<b[i]<<" "<<b[j]<<" "<<b[k]<<"\n";
                        return;
                    }
                }
            }
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
        ob.restoreArray();
    }
    return 0;
}