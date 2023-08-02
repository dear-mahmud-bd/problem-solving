// https://www.codechef.com/problems/ASFA
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    int howManyOperation() { 
        int n, ele, Cnt0=0, Cnt1=0;
        cin>>n;
        for (int i = 0; i < n; i++){
            cin>>ele;
            if(ele==0) Cnt0++;
            else Cnt1++;
        }
        if(n%2!=0 || Cnt0==0 || Cnt1==0) return -1;
        else if(Cnt0!=Cnt1){
            if(Cnt1<Cnt0) return (Cnt0-Cnt1)/2;
            else{
                int diff = abs(Cnt0-Cnt1);
                if(diff%4==0) return diff/4;
                else return diff/4 +2;
            }
        } 
        else return 0;
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
        cout<<ob.howManyOperation()<<"\n";
    }
    return 0;
}