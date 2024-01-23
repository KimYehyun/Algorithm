#include<iostream>
#include<algorithm>
using namespace std;
int arr[5001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int cnt = 0;
	int left = 0, right = n - 1;
	while (left < right) {
		if (arr[left] + arr[right] <= k) {
			cnt++;
			left++;
			right--;
		}
		else {
			right--;
		}
	}
	cout << cnt << "\n";
	return 0;
}