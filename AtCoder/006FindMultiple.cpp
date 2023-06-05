// https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main() {
    int A, B, C;
    cin>>A>>B>>C;
    int ans = -1;
    for (int i=A; i<=B; i++) {
        if (i%C == 0) {
            ans = i;
            break;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
