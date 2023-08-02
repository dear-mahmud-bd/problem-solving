// https://codeforces.com/contest/1833/problem/A
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int getMinMelodies() {
        int n;
        cin>>n; 
        string melody;
        cin >> melody;
        set<string> recorded;
        for (int i = 0; i < n - 1; i++) {
            string segment = melody.substr(i, 2);
            recorded.insert(segment);
        }
        return recorded.size();
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.getMinMelodies()<<"\n";
    }
    return 0;
}