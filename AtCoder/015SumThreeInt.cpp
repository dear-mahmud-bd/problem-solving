// https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int howMany(int K, int S) {
    int count = 0;
    for (int X = 0; X <= K; X++) {
        for (int Y = 0; Y <= K; Y++) {
            int Z = S - X - Y;
            if (Z >= 0 && Z <= K) {
                count++;
            }
        }
    }
    return count;
}
int main(){
    int K, S;
    cin>>K>>S;
    cout<<howMany(K, S)<<"\n";
    return 0;
}