// https://www.codechef.com/problems/FIFTYPE
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minTimeToReach50Percent() { 
        int N;
        cin >> N;
        if (N < 50) {
            if(N%2==0) return (50-N)/2;
            else return ((50-N)/2)+3;
        } else {
            if((N-50)%3==2) return ((N-50)/3)+4; 
            else if((N-50)%3==1) return ((N-50)/3)+2;
            else return (N-50)/3;
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
        cout<<ob.minTimeToReach50Percent()<<"\n";
    }
    return 0;
}