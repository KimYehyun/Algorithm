#include<iostream>
#include<algorithm>
using namespace std;
int arr[1001];
int arr2[1001];

int binarysearch(int left, int right, int target) {
	int mid;
	while (left < right) {
		mid = (left + right) / 2;
		if (arr2[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid;
		}
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
	
	int j = 0;
	arr2[0] = arr[0];
	int i = 1;

	while (i < n) {
		if (arr2[j] < arr[i]) {
			arr2[j + 1] = arr[i];
			j += 1;
		}
		else {
			int idx = binarysearch(0, j, arr[i]);
			arr2[idx] = arr[i];
		}
		i += 1;
	}
	cout << j + 1;

	return 0;
}