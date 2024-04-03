#include <bits/stdc++.h>
using namespace std;
int n;
int arr[5] = { 0, 1, 2, 5, 7 };
int dp[100001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> n;

    for (int i = 0; i <= n; i++) {
        dp[i] = 2134567890;
    }

    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 4; j++) {
            if (i >= arr[j]) {
                dp[i] = min(dp[i], dp[i - arr[j]] + 1);
            }
        }
    }

    cout << dp[n];
    return 0;
}