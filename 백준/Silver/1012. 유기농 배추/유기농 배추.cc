#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
bool arr[51][51];
int t, m, n, k;
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
void bfs(int i, int j) {
	queue<pair<int, int>>q;
	q.push({ i,j });
	arr[i][j] = 0;
	while (!q.empty()) {
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur_x + dx[i];
			int ny = cur_y + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny]!=0) {
				q.push({ nx,ny });
				arr[nx][ny] = 0;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> t;
	for (int tc = 0; tc < t; tc++) {	
		cin >> n >> m >> k;
		memset(arr, 0, sizeof(arr));
		for (int i = 0; i < k; i++) {
			int a, b;
			cin >> a >> b;
			arr[a][b] = 1;
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 1) {
					bfs(i, j);
					ans++;
				}
			}
		}
		cout << ans << "\n";

	}

	return 0;
}