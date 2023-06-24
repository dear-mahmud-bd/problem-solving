// https://codeforces.com/contest/1843/problem/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void sumWithMinOperation() { 
        int n;
        cin >> n;
        ll ele, operation=0, sum=0;
        bool previous = true;
        for (int i = 0; i < n; i++){
            ll ele;
            cin >> ele;
            if (ele<0 && previous){
                operation++;
                previous = false;
            }
            if (ele > 0) previous = true;
            sum += abs(ele);
        }
        cout<<sum<<" "<<operation<<"\n";
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
        ob.sumWithMinOperation();
    }
    return 0;
}