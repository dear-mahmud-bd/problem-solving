// https://atcoder.jp/contests/abc199/tasks/abc199_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout << ( ((a*a)+(b*b)) < (c*c) ? "Yes":"No" ) << "\n";
    return 0;
}