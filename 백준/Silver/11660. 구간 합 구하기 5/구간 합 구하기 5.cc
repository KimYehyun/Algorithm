#include<iostream>
using namespace std;

int arr[1025][1025];
int n, m;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;

	int a = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			arr[i][j] += arr[i][j - 1];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			arr[i][j] += arr[i-1][j];
		}
	}

	for (int i = 0; i < m; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << arr[c][d] - arr[c][b - 1] - arr[a - 1][d] + arr[a - 1][b - 1] << "\n";
	}
	
	return 0;
}