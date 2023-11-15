#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int n, m;
int arr[301][301];
int result[301][301];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
bool visit[301][301];
queue<pair<int, int>>q;
void bfs() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			result[i][j] = arr[i][j];
		}
	}
	int s = q.size();
	while (s--) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (arr[nx][ny] == 0 && result[x][y]!=0) {
				result[x][y]--;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = result[i][j];
		}
	}
	return;
}

void c_bfs(int a,int b) {
	queue<pair<int, int>>q1;
	q1.push({a,b});
	visit[a][b] = 1;
	while (!q1.empty()) {
		int x = q1.front().first;
		int y = q1.front().second;
		q1.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < m && arr[nx][ny]!=0 && visit[nx][ny] == 0) {
				q1.push({ nx,ny });
				visit[nx][ny] = 1;
			}
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
			if (arr[i][j] != 0)
				q.push({ i,j });
		}		
	}
	int ans = 0;
	while (1) {
		int cnt = 0;
		ans++;
		bfs();
		memset(visit, 0, sizeof(visit));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] != 0) {
					q.push({ i,j });
				}
				if (arr[i][j] != 0 && visit[i][j]==0) {		
					c_bfs(i,j);
					cnt++;
				}
			}
		}
		

		if (cnt > 1) {
			cout << ans << "\n";
			break;
		}
		else if (cnt == 0) {
			cout << 0 << "\n";
			break;
		}
		
	}



	return 0;
}