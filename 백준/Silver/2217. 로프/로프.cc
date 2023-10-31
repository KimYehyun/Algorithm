#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int n, arr[1000001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	int m = arr[n - 1];

	for (int i = n-1; i >=0; i--) {
		int k = arr[i] * (n-i);
		m = max(m, k);
	}
	cout << m << "\n";

	return 0;
}