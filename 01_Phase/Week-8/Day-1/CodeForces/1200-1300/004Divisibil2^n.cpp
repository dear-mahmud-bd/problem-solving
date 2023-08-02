// https://codeforces.com/contest/1744/problem/D
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int howManyPower(int num){
        int n=0;
        while(num%2==0 && num>0){
            num /= 2;
            n++;
        }
        return n;
    }
    int minmumOperation() { 
        int n, count=0;
        cin >> n;
        vector<int> a(n+1), powerCount;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if(a[i]%2 == 0){
                count += howManyPower(a[i]);
            }
        }
        if(count >= n){
            return 0;
        }
        for (int i = n; i >= 1; i--){
            if(i%2 == 0){
                powerCount.push_back( howManyPower(i) );
            }
        }
        sort(powerCount.begin(), powerCount.end(), [](int a, int b) {return a > b;});
        for (int i = 0; i < powerCount.size(); i++){
            count += powerCount[i];
            if(count >= n){
                return i+1;
            }
        }
        return -1;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.minmumOperation()<<"\n";
    }
    return 0;
}