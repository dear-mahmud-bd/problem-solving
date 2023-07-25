// https://www.codechef.com/problems/RUNCOMPARE
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int bothHappyDays() { 
        int N, happyDays = 0;;
        cin >> N;
        vector<int>alic(N), bob(N);
        for (int i = 0; i < N; i++){
            cin>>alic[i];
        }
        for (int i = 0; i < N; i++){
            cin>>bob[i];
        }
        for (int i = 0; i < N; i++){
            if (bob[i]<=2*alic[i] && alic[i]<=2*bob[i]) {
                happyDays++;
            }
        }
        return happyDays;
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
        cout<<ob.bothHappyDays()<<"\n";
    }
    return 0;
}