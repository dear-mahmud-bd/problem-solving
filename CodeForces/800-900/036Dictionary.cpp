// https://codeforces.com/contest/1674/problem/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int calculateIndex() { 
        string word;
        cin >> word;
        if(word[0] > word[1]){
            return (word[0]-'a')*25 + (word[1]-'a') + 1;
        }else{
            return (word[0]-'a')*25 + (word[1]-'a');
        }
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.calculateIndex()<<"\n";
    }
    return 0;
}