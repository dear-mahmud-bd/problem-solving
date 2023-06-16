// https://atcoder.jp/contests/abc083/tasks/arc088_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long X, Y;
    cin>>X>>Y;
    int length = 0;
    while (X <= Y) {
        X *= 2;
        length++;
    }
    cout<<length<<"\n";
    return 0;
}