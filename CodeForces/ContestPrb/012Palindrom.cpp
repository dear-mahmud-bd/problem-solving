// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int reversed = 0;
    int temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    if (reversed == n) cout << reversed << "\nYES\n";
    else cout << reversed << "\nNO\n";
    return 0;
}