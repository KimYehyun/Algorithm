#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int n, m, k;
int arr[51][51];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
void bfs(int i,int j){
	queue<pair<int, int>>q;
	q.push({ i,j });
	arr[i][j] = 0;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny] == 1) {
				q.push({ nx,ny });
				arr[nx][ny] = 0;
			}
		}
	}
	return;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		cin >> n >> m >> k;
		for (int i = 0; i < k; i++) {
			int a, b;
			cin >> a >> b;
			arr[a][b] = 1;
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 1) {
					bfs(i,j);
					ans++;
				}
			}
		}
		cout << ans << "\n";
		memset(arr, 0, sizeof(arr));
	}
	return 0;
}