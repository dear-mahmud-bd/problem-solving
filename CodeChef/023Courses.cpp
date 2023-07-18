// https://www.codechef.com/problems/CCLEARN
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int totalCourses() { 
        int N;
        cin >> N;
        return 2 * N;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.totalCourses()<<"\n";
    }
    return 0;
}