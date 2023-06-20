// 
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int functionName() { 
        string expression;
        cin >> expression;
        int a = expression[0] - '0';
        int b = expression[2] - '0';
        return a + b;
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.functionName()<<"\n";
    }
    return 0;
}