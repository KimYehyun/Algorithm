#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int dp[100001][3];
int arr[100001][3];
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for (int i = 1; i <= n; i++) {
        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]) + arr[i][0];
        dp[i][1] = max({ dp[i - 1][0],dp[i - 1][1], dp[i - 1][2] }) + arr[i][1];
        dp[i][2] = max(dp[i - 1][1], dp[i - 1][2]) + arr[i][2];
    }

    int max_v = max({ dp[n][0], dp[n][1], dp[n][2] });

    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= n; i++) {
        dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][0];
        dp[i][1] = min({ dp[i - 1][0],dp[i - 1][1], dp[i - 1][2] }) + arr[i][1];
        dp[i][2] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][2];
    }

    int min_v = min({dp[n][0], dp[n][1], dp[n][2]});

    cout << max_v << " " << min_v << '\n';

    return 0;
}
