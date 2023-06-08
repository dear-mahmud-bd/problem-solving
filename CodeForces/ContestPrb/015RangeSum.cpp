// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long int l, r;
        cin>>l>>r;
        if(l>r) swap(l,r);
        l--;
        long long sum = (((r*r)+r)/2) - (((l*l)+l)/2);
        cout << sum << "\n";
    }
    return 0;
}