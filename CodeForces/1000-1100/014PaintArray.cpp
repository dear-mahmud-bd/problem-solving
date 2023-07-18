// https://codeforces.com/contest/1618/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    ll findSuitableD() { 
        int n;
        cin >> n;
        vector<long long> arr(n);
        bool even=false, odd=false, hasSameColor=false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i>0 && arr[i]==arr[i-1]) hasSameColor=true;
        }
        if(hasSameColor)return 0;
        ll oddGCD=arr[0], evenGCD=arr[1];
        for (int i = 0; i < n; i++){
            if(i%2==0) oddGCD = gcd(oddGCD, arr[i]);
            else evenGCD = gcd(evenGCD, arr[i]);
        }
        for (int i = 0; i < n; i++){
            if (i%2==0 && arr[i]%evenGCD==0 && !odd) {
                odd = true;
            }
            if (i%2!=0 && arr[i]%oddGCD==0 && !even) {
                even = true;
            }
            if(odd&&even)break;
        }
        if(odd&&even)return 0;
        else if (!odd)return evenGCD;
        else return oddGCD;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.findSuitableD()<<"\n";
    }
    return 0;
}