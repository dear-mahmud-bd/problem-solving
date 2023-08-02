// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
#include<bits/stdc++.h>
using namespace std;
void reverseWords(string& str) {
    string reversedWord;
    string reversedString;
    for (char ch : str) {
        if (ch != ' ') {
            reversedWord = ch+reversedWord;
        } else {
            reversedString += reversedWord+' ';
            reversedWord = "";
        }
    }   
    reversedString += reversedWord;
    str = reversedString;
}
int main(){
    string st;
    getline(cin, st);
    reverseWords(st);
    cout<<st<<"\n";
    return 0;
}