#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
long long arr[501][501];
long long dp;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> arr[i][j];
		}
	}
	
	for (int i = n-1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			arr[i - 1][j] = max(arr[i][j] + arr[i - 1][j], arr[i][j + 1] + arr[i - 1][j]);
		}
	}

	cout << arr[0][0] << "\n";

	return 0;
}