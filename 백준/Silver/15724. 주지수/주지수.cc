#include<iostream>
using namespace std;
int arr[1025][1025];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m, k;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			arr[i][j] += arr[i][j-1];
		}
	}


	for (int j = 1; j <= m; j++) {
		for (int i = 1; i <= n; i++) {
			arr[i][j] += arr[i-1][j];
		}
	}

	cin >> k;
	int x1,x2,y1,y2;
	for (int i = 0; i < k; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		long long ans = 0;
		ans += arr[x2][y2] - arr[x2][y1-1] - arr[x1-1][y2] + arr[x1 - 1][y1 - 1];
		cout << ans << "\n";
	}
	
	return 0;
}