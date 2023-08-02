// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int freq[26] = {0};
    cin>>n;
    char ch;
    for (int i = 0; i < n; i++) {
        cin>>ch;
        freq[ch-'a']++;
    }
    int index = 0;
    for(int i=0; i<26; i++){
        if(freq[i] > 0){
            for (int j=0; j<freq[i]; j++) {
                char a = 'a' + i;
                cout<< a;
            }
        }
    }
    return 0;
}