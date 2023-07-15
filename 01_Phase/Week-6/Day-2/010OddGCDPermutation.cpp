// https://www.codechef.com/problems/NAS_2523
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void findPermutation() { 
        int n;
        cin>>n;
        if(n%2==0){
            while (n){
                cout<<n<<" ";
                n--;
            }
        }else{
            cout<<-1;
        }
        cout<<"\n";
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.findPermutation();
    }
    return 0;
}