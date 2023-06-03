#include <bits/stdc++.h>
using namespace std;
int findKingIndex(int N, vector<int>& A) {
    vector<long long int> prefixSum(N);
    vector<long long int> suffixSum(N);
    prefixSum[0] = 0;
    for (int i=1; i<N; i++){
        prefixSum[i] = prefixSum[i-1] + A[i-1];
    }
    suffixSum[N - 1] = 0;
    for (int i=N-2; i>=0; i--){
        suffixSum[i] = suffixSum[i+1] + A[i+1];
    }
    for (int i=0; i<N; i++){
        if (prefixSum[i] == suffixSum[i]) {
            return i;
        }
    }
    return -1;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i=0; i<N; i++){
            cin >> A[i];
        }
        int kingIndex = findKingIndex(N, A);
        cout<<kingIndex<<"\n";
    }
    return 0;
}