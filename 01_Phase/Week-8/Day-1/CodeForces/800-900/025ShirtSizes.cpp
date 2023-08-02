// https://codeforces.com/contest/1741/problem/A
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void functionName() { 
        string str1, str2;
        cin >> str1 >> str2;
        if(str1 == str2){
            cout << "=\n";
            return;
        }
        long long l = 1, r = 1;
        for(int i = 0; i < str1.size(); i++){
            if(str1[i] == 'X') l *= 2;
            else if(str1[i] == 'M') l *= 3;
            else if(str1[i] == 'L') l *= 4;
            else if(str1[i] == 'S') l *= -2;
        }
        for(int i = 0; i < str2.size(); i++){
            if(str2[i] == 'X') r *= 2;
            else if(str2[i] == 'M') r *= 3;
            else if(str2[i] == 'L') r *= 4;
            else if(str2[i] == 'S') r *= -2;
        }
        if(l > r) cout << ">\n";
        else cout << "<\n";
        return ;
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.functionName();
    }
    return 0;
}