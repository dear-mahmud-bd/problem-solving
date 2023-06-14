// https://codeforces.com/problemset/problem/102/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    while (str.size() != 1){
        int sum=0;
        for (int i=0; i<str.size(); i++){
            sum += (str[i]-'0');
        }
        str = to_string(sum);
        count++;
    }
    cout<<count<<"\n";
    return 0;
}