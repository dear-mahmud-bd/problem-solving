// https://codeforces.com/problemset/problem/805/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string threePalindrm() { 
        int n, count=0;
        bool flag=true;
        cin>>n;
        string str="";
        for (int i = 0; i < n; i++){
            if(flag){
                str +='a';
                count++;
                if(count==2){
                    flag=false;
                    count=0;
                }
            }else{
                str +='b';
                count++;
                if(count==2){
                    flag=true;
                    count=0;
                }
            }
        }
        return str;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.threePalindrm()<<"\n";
    }
    return 0;
}