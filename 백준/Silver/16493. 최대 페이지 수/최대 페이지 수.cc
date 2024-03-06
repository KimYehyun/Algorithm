#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
vector<pair<int,int>>v;
int dp[21][201];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
   
    cin >> n >> m;
    v.push_back({0,0});
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >>b;
        v.push_back({a,b});
    }
    for (int i = 1; i <= m; i++) {
		for (int j = n; j >= 0; j--) {
			if (j - v[i].first >= 0) {
				dp[i][j] = max(dp[i-1][j], dp[i - 1][j - v[i].first] + v[i].second);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
			ans = max(ans, dp[i][j]);
		}
	}
    cout << ans;
    return 0;
}