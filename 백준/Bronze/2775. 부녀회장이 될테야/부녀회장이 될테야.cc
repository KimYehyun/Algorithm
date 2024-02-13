#include<iostream>
using namespace std;
long long arr[20][20];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	for (int j = 1; j <= 14; j++) {
		arr[0][j] = j;
	}
	for (int a = 1; a <= 14; a++) {
		for (int b = 1; b <= 14; b++) {
			if (b == 1) arr[a][b] = arr[a - 1][b];
			else arr[a][b] = arr[a][b-1]+arr[a - 1][b];
		}
	}

	int t;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		int k, n;
		cin >> k >> n;
		cout << arr[k][n] << "\n";
	}

	return 0;
}