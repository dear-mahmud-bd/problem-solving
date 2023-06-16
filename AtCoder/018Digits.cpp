// https://atcoder.jp/contests/abc156/tasks/abc156_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, digit=0;
    cin>>n>>k;
    while (n!=0){
        n /= k;
        digit++;
    }
    cout<<digit<<"\n";
    return 0;
}