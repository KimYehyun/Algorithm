#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;
ll N, M;
vector<ll>v;
ll max_v = 0;
int main(void) {
	
	
	cin >> N >> M;
	for (ll i = 0; i < N; i++) {
		ll a;
		cin >> a;
		v.push_back(a);
		max_v = max(max_v, a);
	}

	ll left = 1, right = max_v, ans = 0;
	while (left <= right) {
		ll mid = (left + right) / 2;
		ll sum = 0;
		for (ll i = 0; i < N; i++) {
			if(v[i]-mid>=0)
				sum += (v[i] - mid);
		}
		if (sum < M) {
			right = mid - 1;	
		}
		else {
			left = mid + 1;
			ans = mid;
		}
	}

	cout << ans << "\n";

	return 0;
}