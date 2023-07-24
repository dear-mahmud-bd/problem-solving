// https://www.codechef.com/problems/BITEQU
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void findIntegers() {
        ll N;
        cin>>N;
        ll a=(2ll << 32), b=(2ll << 33);
        if(N==0) cout<<"1 3 4 5"<<"\n";
	    else if(N==1) cout<<"1 4 3 2"<<"\n";
	    else if(N%2==0) cout<<a<<" "<<b<<" "<<1<<" "<<N+1<<"\n";
	    else cout<<a<<" "<<b<<" "<<1<<" "<<N-1<<"\n";
        return;
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
        ob.findIntegers();
    }
    return 0;
}