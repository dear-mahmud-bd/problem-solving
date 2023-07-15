// https://www.codechef.com/problems/SEATNUMBER
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string classifySeat(int seatNumber) {
        if(seatNumber <= 10) return "Lower Double";
        else if(seatNumber>10 && seatNumber<=15) return "Lower Single";
        else if(seatNumber>15 && seatNumber<=25) return "Upper Double";
        else return "Upper Single";
    }
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        int N;
        cin >> N;
        cout<<ob.classifySeat(N)<<"\n";
    }
    return 0;
}