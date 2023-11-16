#include<iostream>
#include<vector>
using namespace std;
int n, k;
int arr[1000001];
vector<int>v;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	
	int left = 0, right = 1, cnt = 0;
	int ans = 2134567890;
	if (arr[0] == 1) {
		cnt = 1;
	}
	while (1) {
		if (cnt >= k) {
			ans = min(ans, right - left);
			if (arr[left] == 1) cnt--;
			left++;
		}
		else {
			if (right == n)break;
			if (arr[right] == 1) cnt++;
			right++;
		}
	}
	if (ans == 2134567890) cout << -1;
	else cout << ans << "\n";

	return 0;
}