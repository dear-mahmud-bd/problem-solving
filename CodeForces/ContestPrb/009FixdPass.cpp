// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
#include<bits/stdc++.h>
using namespace std;
int main() {
    string password;
    while (getline(cin, password)) {
        if (password == "1999") {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}