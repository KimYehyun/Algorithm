#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long dp[101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    dp[1] = 1;
    dp[2] =1;
    dp[3] =1;
    for(int i=4;i<=100;i++){
        dp[i] = dp[i-3]+dp[i-2];
    }
   
    int n;
    cin >> n;
    while(n--){
        int k;
        cin >> k;
        cout << dp[k] <<"\n";
    }
    return 0;
}