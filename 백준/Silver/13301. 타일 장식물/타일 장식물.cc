#include <bits/stdc++.h>
using namespace std;
long long dp[81];
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    dp[1] = 4;
    dp[2] = 6;
    cin >> n;
    for(int i =3;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout << dp[n];
    return 0;
}