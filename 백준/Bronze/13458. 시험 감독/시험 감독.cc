#include<iostream>
using namespace std;
typedef long long ll;
ll arr[1000001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n, a, b, c;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> b >> c;
	ll ans = n;
	for (ll i = 0; i < n; i++) {
		arr[i] -= b;
	}

	for (ll i = 0; i < n; i++) {
		if (arr[i] <= 0) continue;
		ans += arr[i] / c;
		if ((arr[i] % c) != 0) ans++;	
	}
	cout << ans << "\n";

	return 0;
}