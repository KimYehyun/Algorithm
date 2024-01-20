#include <iostream>
#include <algorithm>
using namespace std;
int n;
long long sum = 0;
int arr[500001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + n);

	long long ans = 0;
	for (int i = 0; i < n; i++) {
		sum -= arr[i];
		ans += arr[i] * sum;
	}
	cout << ans;
	return 0;
}