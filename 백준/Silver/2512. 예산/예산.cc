#include<iostream>
#include<algorithm>
using namespace std;
int arr[10001];
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n,m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> m;
	
	int left = 1, right = m;
	int ans = 0; 
	while (left <= right) {
		int sum = 0; int max_v = 0;
		int mid = (left + right) / 2;
		for (int i = 0; i < n; i++) {
			if (mid >= arr[i]) {
				sum += arr[i];
				max_v = max(arr[i], max_v);
			}
			else {
				sum += mid;
				max_v = max(max_v, mid);
			}
		}	
		if (sum <= m) {
			ans = max(ans, max_v);
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << ans << "\n";
	return 0;
}