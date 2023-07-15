// https://www.codechef.com/problems/STRAME
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string determineWinner() { 
        int n, count=0;
	    string str;
	    cin>>n>>str;
	    stack<char> stk;
	    for(auto ch : str){
	        if(!stk.empty() && stk.top()!=ch){
	            stk.pop();
	            count++;
	        }else{
	            stk.push(ch);
	        }
	    }
        return (count%2==1) ? "Zlatan":"Ramos";
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.determineWinner()<<"\n";
    }
    return 0;
}