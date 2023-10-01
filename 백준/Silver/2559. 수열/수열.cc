#include<iostream>
#include<cmath>
using namespace std;

int n, m;
long long arr[100001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;

	cin >> arr[1];
	for (int i = 2; i <= n; i++) {
		cin >> arr[i];
		arr[i] = arr[i] + arr[i - 1];
	}

	int start = 0, end = m;
	long long max1 = -987654321;

	while (end <= n) {
		long long sum = 0;
		sum = arr[end] - arr[start];
		max1 = max(sum, max1);
		end++;
		start++;
	}
	cout << max1 << "\n";
	return 0;
}