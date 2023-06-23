// https://codeforces.com/contest/1741/problem/B
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void printFunnyPermutation() { 
        int n;
        cin>>n;
        if(n==3){
            cout<<-1<<"\n";
            return;
        }
        int frnt= n/2 + 1, track=n/2, num=n;
        while (n--){
            if(frnt<=num){
                cout<<frnt<<" ";
                frnt++;
            }else{
                cout<<track<<" ";
                track--;
            }
        }
        cout<<"\n";
        return ;
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.printFunnyPermutation();
    }
    return 0;
}