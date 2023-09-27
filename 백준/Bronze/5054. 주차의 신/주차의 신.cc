#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, sum = 0;
		int arr[21];
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		for (int i = 1; i < n; i++) {
			sum += arr[i] - arr[i - 1];
		}
		cout << sum * 2 << "\n";
	}
	return 0;
}