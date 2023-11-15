#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

ll n, m,max_v,k;
vector<ll>v;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (ll i = 0; i < n; i++) {
		ll a;
		cin >> a;
		v.push_back(a);
		k += a;
		max_v = max(max_v, a);
	}
	ll left = max_v, right = k, ans =0;
	while (left <= right) {
		ll mid = (left + right) / 2;
		ll cnt = 0,sum=0;
		for (ll i = 0; i < n; i++) {
			sum += v[i];
			if (sum > mid) {
				cnt++;
				sum = v[i];
			}
		}
		if (cnt < m) {
			right = mid - 1;
			ans = mid;
		}
		else {
			left = mid + 1;
		}

	}
	cout << ans << "\n";


	return 0;
}