#include <bits/stdc++.h>

using namespace std;

const int MAX = 1001;
int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
char b[MAX][MAX];
bool visited[MAX][MAX];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m, n;
	cin >> m >> n;

	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			cin >> b[i][j];

	queue<pair<int, int>> q;
	for (int i = 1; i <= n; i++) {
		if (b[1][i] == '0') {
			q.push({ 1, i });
			visited[1][i] = true;
		}
	}

	while (!q.empty()) {
		auto now = q.front();
		q.pop();

		if (now.first == m) {
			cout << "YES\n";
			return 0;
		}

		for (int i = 0; i < 4; i++) {
			int nr = now.first + dir[i][0], nc = now.second + dir[i][1];

			if (nr >= 1 && nr <= m && nc >= 1 && nc <= n && b[nr][nc] == '0' && !visited[nr][nc]) {
				q.push({ nr, nc });
				visited[nr][nc] = true;
			}
		}
	}

	cout << "NO\n";
	return 0;
}