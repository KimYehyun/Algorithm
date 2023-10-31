#include<iostream>
using namespace std;
int arr[1001];
int result[1001];

int binary_search(int left, int right, int value) {
	int mid;
	while (left < right) {
		mid = (left + right) / 2;
		if (result[mid] > value) {
			left = mid + 1;
		}
		else right = mid;
	}
	return right;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	result[0] = arr[0];
	int i = 1, j = 0;
	while (i < n) {
		if (result[j] > arr[i]) {
			result[j+1] = arr[i];
			j++;
		}
		else {
			int idx = binary_search(0, j, arr[i]);
			result[idx] = arr[i];
		}
		i += 1;
	}
	cout << j + 1;
	return 0;
}