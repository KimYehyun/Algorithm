#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
char arr[101][101];
int dist[101][101];

void bfs() {
	queue<pair<int,int>>q;
	q.push({ 0,0 });
	dist[0][0] = 0;

	while (!q.empty()) {
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		q.pop();
	
		for (int i = 0; i < 4; i++) {
			int nx = cur_x + dx[i];
			int ny = cur_y + dy[i];
			if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
			if (arr[nx][ny] == '1') {
				if (dist[nx][ny] > dist[cur_x][cur_y] + 1) {
					dist[nx][ny] = dist[cur_x][cur_y] + 1;
					q.push({ nx,ny });
				}
			}
			else {
				if (dist[nx][ny] > dist[cur_x][cur_y]) {
					dist[nx][ny] = dist[cur_x][cur_y];
					q.push({ nx,ny });
				}
			}
		}
	}
	return;
}



int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			dist[i][j] = 2134567890;
		}
	}

	bfs();
	cout << dist[m - 1][n - 1];

	return 0;
}