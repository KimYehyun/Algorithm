#include<iostream>
#include<algorithm>
using namespace std;
int n, m, b;
int arr[501][501];

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int min_v = 987654321, max_v = 0;
	cin >> n >> m >> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			min_v = min(min_v, arr[i][j]);
			max_v = max(max_v, arr[i][j]);
		}
	}
	int result = 987654321;
	int block_v = 0;
	for (int t = min_v; t <= max_v; t++) {
		int block = b;
		int time_v = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] < t) {
					block -= (t - arr[i][j]);
					time_v += (t - arr[i][j]);
				}
				else {
					block += (arr[i][j] - t);
					time_v += (arr[i][j] - t) * 2;
				}
			}
		}
		if (block < 0)continue;
		if (result >= time_v) {
			result = time_v;
			block_v = t;
		}
	}

	cout << result <<" "<< block_v << "\n";

	return 0;
}