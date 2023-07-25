// https://www.codechef.com/problems/SUMPERM
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void generatePermutation() { 
        ll N;
        cin >> N;
        if(((N*(N+1))/2)%N==0){
            cout<<-1<<"\n";
            return;
        }
        for (ll i=2,j=1; i<=N,j<=N; i+=2,j+=2){
            cout<<i<<" "<<j<<" ";
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
        ob.generatePermutation();
    }
    return 0;
}