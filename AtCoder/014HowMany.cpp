// https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int countTriples(int S, int T) {
    int count = 0;
    for (int a=0; a<=S; a++) {
        for (int b=0; b<=S; b++) {
            for (int c=0; c<=S; c++) {
                if (a+b+c <=S && a*b*c<= T) {
                    count++;
                }
            }
        }
    }
    return count;
}
int main() {
    int S, T;
    cin >> S >> T;
    int result = countTriples(S, T);
    cout << result << "\n";
    return 0;
}