// https://www.codechef.com/problems/EVALMAS
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string possibleString() { 
        int N, X, value=1;
        cin >> N >> X;
        string str="";
        for (int i = 0; i < N; i++){
            if(value==X){
                str+='*';
            } else if (value>X){
                str+='-';
                value--;
            }else{
                str+='+';
                value++;
            }
        }
        return (value==X)? str:"-1";
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
        cout<<ob.possibleString()<<"\n";
    }
    return 0;
}