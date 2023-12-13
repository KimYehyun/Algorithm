#include<iostream>
#include<string.h>
using namespace std;
char arr[101][101];
int result[101][101];
int dx[8] = { 1, 1, 1, 0,-1,-1,-1,0 };
int dy[8] = { 1, 0,-1,-1,-1, 0, 1,1 };
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	while (1) {
		memset(arr, 0, sizeof(arr));
		memset(result, 0, sizeof(result));
		cin >> n >> m;
		if (n == 0 && m == 0) break;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == '*') {
					result[i][j] = -1;
					continue;
				}
				for (int k = 0; k < 8; k++) {
					int ni = i + dx[k];
					int nj = j + dy[k];
					if (ni >= 0 && nj >= 0 && ni < n && nj < m && arr[ni][nj] == '*') {
						result[i][j]++;
					}
				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (result[i][j] == -1) cout << '*';
				else cout << result[i][j];
			}
			cout << "\n";
		}

	}
	
	return 0;
}