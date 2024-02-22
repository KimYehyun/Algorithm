#include<iostream>
#include<algorithm>
using namespace std;
int n, k;
long long arr[10001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);

	long long left = 1, right = arr[n - 1];
	long long ans = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		long long cnt = 0;
		
		for (int i = 0; i < n; i++)
			cnt += (arr[i] / mid);
		if (cnt >= k) {
			if (ans < mid) ans = mid;
			left = mid + 1;
		}
			
		else
			right = mid - 1;
	}

	cout << ans;
	return 0;
}