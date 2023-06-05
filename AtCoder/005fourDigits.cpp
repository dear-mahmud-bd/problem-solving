// https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    string result = to_string(N);
    result = string(4 - result.length(), '0') + result;
    cout<<result<<"\n";
    return 0;
}