#include<iostream>
#include<string.h>
using namespace std;
int arr[101][101];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	memset(arr, -1, sizeof(arr));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			char a;
			cin >> a;
			if (a == 'c') arr[i][j] = 0;
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (arr[i][j - 1] > -1 && arr[i][j] == -1) {
				arr[i][j] = arr[i][j - 1] + 1;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << arr[i][j] << " ";
		}cout << "\n";
	}

	return 0;
}