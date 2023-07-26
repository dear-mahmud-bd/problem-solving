// https://www.codechef.com/problems/BOOKPAGES
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string isValidDistribution() { 
        int n, ele, sum=0;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin>>ele;
            sum += ele;
        }
        if(sum%2==0) return "YES";
        return "NO";
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
        cout<<ob.isValidDistribution()<<"\n";
    }
    return 0;
}