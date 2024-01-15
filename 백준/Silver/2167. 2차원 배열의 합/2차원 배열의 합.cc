#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[301][301];
int main() {
	int n, m, k;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	cin >> k;
	for (int c = 0; c < k; c++) {
		int i, j, x, y;
		cin >> i >> j >> x >> y;
		int sum = 0;
		for (int a = i - 1; a < x; a++) {
			for (int b = j - 1; b < y; b++) {
				sum += arr[a][b];
			}
		}
		cout << sum << "\n";
	}

	return 0;
}