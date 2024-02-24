#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dp[10];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
        int n;
        cin >> n;
		dp[2] = 2;
		for (int i = 3; i < 10; i++) {
			dp[i] = dp[i-1]*3;
		}
		cout << dp[n];
    
    return 0;
}