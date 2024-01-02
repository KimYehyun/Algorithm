#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
ll n, m;
vector<ll>v;

bool check(ll mid) {
	ll cnt = 0;
	for (int i = 0; i < n; i++) {
		cnt += mid / v[i];
	}	
	if (cnt >= m) return true;
	return false;
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	

	ll left = 1, right = 1e15, ans = -1;

	while (left <= right) {
		ll mid = (left + right) / 2;
		if (check(mid)) {
			ans = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}

	cout << ans;
	return 0;
}