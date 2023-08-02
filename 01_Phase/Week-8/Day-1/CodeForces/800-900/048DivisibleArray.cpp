// https://codeforces.com/problemset/problem/1828/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void functionName() { 
        int n;
        cin>>n;
        vector<int> perfectArray(n);
        for (int i=0, j=2; i < n; i++) {
            perfectArray[i] = j;
            j+=2;
        }
        for (int num : perfectArray) {
            cout << num << " ";
        }
        cout<<"\n";
        return ;
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
        ob.functionName();
    }
    return 0;
}