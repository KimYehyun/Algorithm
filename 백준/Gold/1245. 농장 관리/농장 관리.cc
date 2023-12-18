#include<iostream>
#include<queue>
using namespace std;
int n, m, cnt;
int arr[101][71];
bool visit[101][71]={false,};
int dx[8] = { 0,0,1,-1,1,1, -1,-1};
int dy[8] = { 1,-1,0,0,1,-1,-1, 1};
bool isPeak = true;

void bfs(int a, int b) {
	queue<pair<int, int>>q;
	q.push({ a, b });
	visit[a][b] = 1;

	while (!q.empty()) {
		bool ans = 0;
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int nx = cur_x + dx[i];
			int ny = cur_y + dy[i];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (arr[a][b] < arr[nx][ny]) isPeak = false;
			if (visit[nx][ny] | arr[a][b] != arr[nx][ny]) continue;
			q.push({ nx,ny });
			visit[nx][ny] = 1;
		}
		
	}
	return;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visit[i][j]==0) {
				isPeak = true;
				bfs(i, j);
				if (isPeak)cnt++;
			}			
		}
	}

	cout << cnt << "\n";

	return 0;
}