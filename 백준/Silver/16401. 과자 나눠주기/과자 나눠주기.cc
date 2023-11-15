#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
ll n, m, max_v;
vector<ll>v;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (ll i = 0; i < m; i++) {
		ll a;
		cin >> a;
		v.push_back(a);
		max_v = max(max_v, a);
	}
	
	ll left = 1, right = max_v, ans = 0;
	bool a = 0;
	while (left <= right) {
		ll mid = (right + left) / 2;
		ll cnt = 0;
		for (ll i = 0; i < m; i++) {
			cnt += v[i] / mid;
		}
		if (cnt == 0) {
			cout << 0 << "\n";
			a = 1;
			break;
		}
		if (cnt < n) {
			right = mid - 1; 
		}
		else {
			left = mid + 1;
			ans = mid;
		}
	}

	if (a == 0) cout << ans << "\n";

	return 0;
}