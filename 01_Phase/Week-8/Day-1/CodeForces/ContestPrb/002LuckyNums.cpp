// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
#include<bits/stdc++.h>
using namespace std;
bool isLucky(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        number /= 10;
    }
    return true;
}
int main() {
    int A, B;
    cin >> A >> B;
    vector<int> luckyNumbers;
    for (int i = A; i <= B; i++) {
        if (isLucky(i)) {
            luckyNumbers.push_back(i);
        }
    }
    if (luckyNumbers.empty()) {
        cout<<-1<<"\n";
    } else {
        for (int i = 0; i < luckyNumbers.size(); i++) {
            cout<<luckyNumbers[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}