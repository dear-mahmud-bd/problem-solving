// https://atcoder.jp/contests/abc182/tasks/abc182_b?lang=en
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    vector<int> gcdness(1001, 0); 
    // Calculate GCD-ness for each int from 2-1000
    for (int k=2; k<=1000; k++) {
        for (int i=0; i<N; i++) {
            if (A[i]%k == 0) gcdness[k]++;
        }
    }
    int maxGCDness = 0;
    int intWithMaxGCDness = 0;
    // Find the int with the max GCD-ness
    for (int k=2; k<=1000; k++) {
        if (gcdness[k] >= maxGCDness) {
            maxGCDness = gcdness[k];
            intWithMaxGCDness = k;
        }
    }
    cout<<intWithMaxGCDness<<"\n";
    return 0;
}