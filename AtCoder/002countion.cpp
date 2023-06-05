// https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
#include<iostream>
using namespace std;
int main(){
    int A, B;
    cin>>A>>B;
    if(B-A<1){
        cout<<0<<"\n";
    }else{
        cout<<B-A+1<<"\n";
    }
    return 0;
}