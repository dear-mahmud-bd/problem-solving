// https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
#include<iostream>
using namespace std;
int main(){
    int A, B, sum=0, count=2;
    cin>>A>>B;
    while (count--){
        if(A>B){
            sum += A;
            A--;
        }else if(A==B){
            sum += A;
            A--;
        }else{
            sum += B;
            B--;
        }
    }
    cout<<sum<<"\n";
    return 0;
}