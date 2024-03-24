#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int n; 
    cin >> n;
	vector<ll> v(n + 1); 
    vector<ll> v2(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
		v2[i] = v2[i - 1] + v[i];
	}
	ll ans = 0;
	for (int i = 2; i <= n; i++) {
		ans += v[i] * v2[i - 1];
	}
	cout << ans << '\n';
    return 0;
}