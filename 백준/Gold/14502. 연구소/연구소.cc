#include<iostream>
#include<algorithm>
#include<queue>
#include<string.h>
#include<vector>
using namespace std;
int n, m, max_c = 0;
int arr[10][10];
int arr2[10][10];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int visit[10][10];
vector<pair<int, int>>zero;
int check() {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr2[i][j] == 0) cnt++;
		}
	}
	return cnt;
}

void bfs(int px, int py) {
	queue<pair<int, int>>q;
	visit[px][py] = 1;
	q.push({ px,py });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < m && arr2[nx][ny] == 0 && visit[nx][ny] == 0) {
				q.push({ nx,ny });
				arr2[nx][ny] = 2;
				visit[nx][ny] = 1;
			}
		}
	}
	return;
}

void dfs(int x, int y, int cnt) {

	if (cnt == 3) {
		memset(visit, 0, sizeof(visit));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				arr2[i][j] = arr[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr2[i][j] == 2)
					bfs(i,j);
			}
		}
		int ans = check();
		max_c = max(ans, max_c);
		return;
	}


	for (int i = x; i < n; i++) {
		for (int j = y; j < m; j++) {
			if (arr[i][j] == 0) {
				arr[i][j] = 1;
				dfs(i, j + 1, cnt + 1);
				arr[i][j] = 0;
			}
		}
		y = 0;
	}

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
	dfs(0,0,0);
	cout << max_c << "\n";
	return 0;
}