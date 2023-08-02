// https://codeforces.com/contest/1676/problem/C
#include<bits/stdc++.h>
using namespace std;
int getMinDifference(vector<string> words, int m) {
    int n = words.size();
    int minDifference = INT_MAX;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            int difference = 0;
            for (int k=0; k<m; k++) {
                int wordDiff = abs(words[i][k] - words[j][k]);
                difference += wordDiff;
            }
            minDifference = min(minDifference, difference);
        }
    }
    return minDifference;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<string> words(n);
        for (int i=0; i<n; i++) {
            cin >> words[i];
        }
        cout << getMinDifference(words, m) << "\n";   
    }
    return 0;
}