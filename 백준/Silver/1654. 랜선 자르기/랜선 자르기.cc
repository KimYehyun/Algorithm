#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll k, n;
	ll max_v;
	ll arr[10001];
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> arr[i];
		max_v = max(max_v, arr[i]);
	}

	ll left=1, right=max_v;
	ll ans = 0;
	while (left <= right) {
		ll mid = (left+right)/2;
		int cnt = 0;
		for (int i = 0; i < k; i++) {
			cnt += arr[i] / mid;
		}
		if (cnt < n) {
			right = mid - 1;
		}
		else {
			ans = max(ans, mid);
			left = mid + 1;
		}
	}
	cout << ans << "\n";
	return 0;
}