#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll arr[250001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	cin >> arr[1];
	for (int i = 2; i <= n; i++) {
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}

	ll max_v = 0, cnt = 1;
	for (int i = m; i <= n; i++) {
		if (max_v <= arr[i] - arr[i-m]) {
			if (max_v < arr[i] - arr[i - m])cnt = 1;
			if (max_v == arr[i] - arr[i - m])cnt++;
			max_v = arr[i] - arr[i- m];	
		}
	}
	
	if (max_v == 0) cout << "SAD";
	else {
		cout << max_v << "\n" << cnt;
	}

	return 0;
}