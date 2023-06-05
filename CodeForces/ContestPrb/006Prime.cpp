// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if(num < 2){
        return false;
    }
    for (int i=2; i*i<=num; i++){
        if (num%i ==0){
            return false;
        }
    }   
    return true;
}
int main(){
    int num;
    cin>>num;
    for (int i=2; i<=num; i++){
       if(isPrime(i)) cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}