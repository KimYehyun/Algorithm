#include<iostream>
using namespace std;
char arr[10][10];
int n;
bool flag = 0;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
bool check() {
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			if (arr[x][y] != 'T') continue;
			for (int i = 0; i < 4; i++) {
				for (int j = 1; j < n; j++) {
					int nx = x + dx[i]*j;
					int ny = y + dy[i] * j;

					if (nx < 0 || ny < 0 || nx >= n || ny >= n) break;

					if (arr[nx][ny] == 'O') break;

					if (arr[nx][ny] == 'S') return false;

				}
				
			}

		}
	}
	return true;
}

void dfs(int cnt, int x, int y) {
	if (cnt == 3) {
		flag = check();
		return;
	}
	for (int i = x; i < n; i++) {
		for (int j = y; j < n; j++) {
			if (arr[i][j] != 'X') continue;
			arr[i][j] = 'O';
			dfs(cnt + 1, x, y + 1);
			if (flag) return;
			arr[i][j] = 'X';
		}
		y = 0;
	}
}


int main(void) {

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	dfs(0, 0, 0);

	if (flag) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}