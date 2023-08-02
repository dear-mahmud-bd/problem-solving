// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    for (int row=1; row<=num; row++){
        for (int col=1; col<=num-row; col++){
            cout<<" ";
        }
        for (int col = 1; col <= 2*row-1; col++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for (int row=num; row>=1; row--){
        for (int col=1; col<=num-row; col++){
            cout<<" ";
        }
        for (int col = 1; col <= 2*row-1; col++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}