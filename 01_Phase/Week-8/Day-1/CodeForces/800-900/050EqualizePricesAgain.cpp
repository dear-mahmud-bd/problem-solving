// https://codeforces.com/contest/1234/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minPrice() { 
        int n, ele, sum=0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ele;
            sum+=ele;
        }
        if(sum%n==0) return sum/n;
        else return (sum/n)+1;
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
        cout<<ob.minPrice()<<"\n";
    }
    return 0;
}