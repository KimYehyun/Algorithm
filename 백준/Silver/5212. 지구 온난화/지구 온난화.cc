#include<iostream>
#include<algorithm>
using namespace std;
char arr[15][15];
char result[15][15];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0, 0 };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			result[i][j] = arr[i][j];
		}
	}

	for (int x = 1; x <= n; x++) {
		for (int y = 1; y <= m; y++) {
			if (arr[x][y] == '.')continue;
			int cnt = 0;

			for (int k = 0; k < 4; k++) {
				int nx = x - dx[k];
				int ny = y - dy[k];
				if (arr[nx][ny] != 'X') cnt++;
			}
		
			if (cnt >= 3) {
				result[x][y] = '.';
			}
		}
	}

	int xmin=20, xmax=-1, ymin=20, ymax=-1;
	bool flag = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (result[i][j] == 'X') {
				flag = true;
				xmin = min(xmin, i);
				ymin = min(ymin, j);
				xmax = max(xmax, i);
				ymax = max(ymax, j);
			}
		}
	}

	
	if (flag == true) {
		for (int i = xmin; i <= xmax; i++) {
			for (int j = ymin; j <= ymax; j++) {
				cout << result[i][j];
			}cout << "\n";
		}
	}
	else {
		cout << "X";
	}

	return 0;
}