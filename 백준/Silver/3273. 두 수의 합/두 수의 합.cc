#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
int arr[100001];
int main(void) {
	int n, k, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> k;

	sort(arr, arr + n);

	int left = 0, right = n - 1;

	while (left < right) {
		if (arr[left] + arr[right] < k) left++;
		else if (arr[left] + arr[right] > k) right--;
		else if (arr[left] + arr[right] == k) {
			left++;
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}