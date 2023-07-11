#include<iostream>
#include<string.h>
#include<queue>
using namespace std;

int n, m;
int cnt;
int arr[1001][1001];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,-1,0,1 };
queue<pair<int, int>>q;

void bfs() {
	
	while (!q.empty()) {
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < m && arr[next_x][next_y] == 0) {
				q.push(make_pair(next_x, next_y));
				arr[next_x][next_y] = arr[cur_x][cur_y] + 1;
			}
		}
	}
	return;
}

int main(void) {

		int result = 0;
		scanf("%d %d", &m, &n);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				scanf("%d", &arr[i][j]);
				if (arr[i][j] == 1)
					q.push(make_pair(i, j));
			}
		}
		
		bfs();

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 0) {
					printf("-1\n");
					return 0;
				}
				cnt = (cnt < arr[i][j]) ? arr[i][j] : cnt;
			}
		}
		printf("%d\n", cnt - 1);
		return 0;

	return 0;
}