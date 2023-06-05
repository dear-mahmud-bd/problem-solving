// https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, t, num=0;
    cin>>a>>b>>t;
    int sum = a;
    while (sum<=t){
        num += b;
        sum += a;
    }
    cout<<num<<"\n";
    return 0;
}