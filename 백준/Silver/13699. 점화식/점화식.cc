#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
long long dp[40];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    dp[0]=1;
    dp[1]=1;
    dp[2] = 2;
    dp[3] = 5;
    for(int i=4;i<=35;i++){
        dp[i] = dp[0]*dp[i-1];
        for(int k=1,j=i;k<i,j>=0;k++,j--){
            dp[i] += dp[k]*dp[j-2];
        }
    }
    cin >> n;
    cout << dp[n];
    
    return 0;
}