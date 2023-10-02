#include<iostream>
#include<string.h>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	long long arr[10000];
	memset(arr, 0, 10000 * sizeof(int));
	cin >> n >> m;
	cin >> arr[1];
	for (int i = 2; i <= n; i++) {
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	int cnt = 0;
	for (int i = 0; i <= n - 1; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (arr[j] - arr[i] == m) cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}