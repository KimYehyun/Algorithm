#include<iostream>
#include<algorithm>
using namespace std;
int arr[300001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	
	sort(arr, arr + m);

	int left = 1, right = arr[m-1];

	while (left <= right) {
		int stu = 0;
		int mid = (left + right) / 2;
		for (int i = 0; i < m; i++) {
			stu += arr[i] / mid;
			if (arr[i] % mid != 0) {
				stu++;
			}
		}
		if (stu > n) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	
	cout << left << "\n";

	return 0;
}