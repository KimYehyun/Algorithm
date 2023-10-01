#include<iostream>
using namespace std;
int n, m, i, j;
long long arr[1000001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;

	cin >> arr[1];
	for (int a = 2; a <= n; a++) {
		cin >> arr[a];
		arr[a] = arr[a] + arr[a - 1];
	}
	cin >> m;
	for (int b = 0; b < m; b++) {
		cin >> i >> j;
		if (i == 1) cout << arr[j]<<"\n";
		else {
			cout << arr[j] - arr[i - 1]<<"\n";
		}
	}
	return 0;
}