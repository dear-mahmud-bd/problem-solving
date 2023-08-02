// https://codeforces.com/problemset/problem/271/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int y, rem[4];
    cin>>y;
    int year=y+1;
    while (true){
        int num = year;
        int j = 0;
        while (num !=0){
            rem[j] = num%10;
            num /= 10;
            j++;
        }
        if((rem[0]!=rem[1])&&(rem[0]!=rem[2])&&(rem[0]!=rem[3])&&(rem[1]!=rem[2])&&(rem[1]!=rem[3])&&rem[2]!=rem[3]){
            cout<<year<<"\n";
            break;
        }
        year++;
    }
    return 0;
}