#include<iostream>
#include<algorithm>
using namespace std;
long long arr[1000001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m; 
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	long long left = 0, right = arr[n - 1];
	
	while (left <= right) {
		long long mid = (left + right) / 2;
		int cnt = 0;
		if (mid == 0) {
			left++;
			continue;
		}
		for (int i = 0; i < n; i++) {
			cnt += arr[i] / mid;
		}

		//cout << left << " " << right << "\n";
		//cout << mid << " " << cnt << "\n";

		if (cnt >= m) {
			left = mid+1;
		}
		else {
			right = mid - 1;
		}
	}
	//cout << right << "\n";

	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += arr[i];
	}
	cout << ans - (right*m);

	return 0;
}