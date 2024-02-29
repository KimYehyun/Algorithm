#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dp[11];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    dp[1] = 0;
    dp[2] = 1;

    for(int i=3;i<=10;i++){
        int key = i/2;
        dp[i] = (key*(i-key))+dp[key]+dp[i-key];
    }
    
    int n;
    cin >> n;
    cout << dp[n];
    return 0;
}