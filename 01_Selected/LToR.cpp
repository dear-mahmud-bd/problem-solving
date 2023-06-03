#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;

    for (int i=0; i<test; i++){
        long long int sum = 0,num1, num2;
        cin>>num1>>num2;

        if(num2 < num1) swap(num1,num2);
        sum = (((num2*num2)+num2)/2)-((((num1-1)*(num1-1))+(num1-1))/2);
        
        cout<<sum<<"\n";
    }
    return 0;
}