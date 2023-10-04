#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

bool arr[51][51];
int dx[8] = { 1,-1,0,0,1,1,-1,-1 };
int dy[8] = { 0,0,1,-1,1,-1,-1,1 };

void bfs(int i, int j, int n, int m) {
	queue<pair<int,int>>q;
	q.push({ i,j });
	arr[i][j] = 0;

	while (!q.empty()) {
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < m && arr[next_x][next_y]==1) {
				q.push({ next_x,next_y });
				arr[next_x][next_y] = 0;
			}
		}
	}
	return;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) break;
		memset(arr, 0, sizeof(arr));
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}
		int cnt = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 1) {
					bfs(i, j,m,n);
					cnt++;
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}