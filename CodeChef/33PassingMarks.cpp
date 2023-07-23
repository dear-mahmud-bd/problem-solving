// https://www.codechef.com/problems/CUTOFF
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int passMark() { 
        int N, X;
        cin >> N >> X;
        vector<int> marks(N);
        for (int i = 0; i < N; i++) {
            cin >> marks[i]; 
        }
        sort(marks.begin(), marks.end());
        return marks[N-X] -1;
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
        cout<<ob.passMark()<<"\n";
    }
    return 0;
}