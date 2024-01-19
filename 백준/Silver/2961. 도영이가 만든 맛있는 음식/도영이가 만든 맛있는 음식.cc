#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int n;
int arr[10][2];
int ans = 2134567890;
void dfs(int idx, int multi, int sum, bool use) {
	if (idx == n) {
		if (use) {
			ans = min(ans, abs(multi - sum));
		}
		return;
	}
	dfs(idx + 1, multi, sum, use);
	dfs(idx + 1, multi * arr[idx][0], sum + arr[idx][1], 1);
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	dfs(0, 1, 0, 0);
	cout << ans << "\n";
	return 0;
}