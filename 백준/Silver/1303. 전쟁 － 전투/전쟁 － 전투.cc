#include<iostream>
#include<queue>
using namespace std;

int n, m;
char arr[101][101];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,-1,0,1 };

bool visit[101][101];

int sum1 = 0, sum2 = 0;

int bfs(int a, int b, char x) {
	queue<pair<int, int>>q;
	q.push(make_pair(a, b));
	visit[a][b] = 1;
	int cur_x, cur_y;
	int cnt = 1;
	while (!q.empty()) {

		cur_x = q.front().first;
		cur_y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < m && arr[next_x][next_y] == x && visit[next_x][next_y]==0) {
				visit[next_x][next_y] = 1;
				q.push(make_pair(next_x, next_y));
				cnt++;
			}
		}
	}
	return cnt;
}

int main(void) {

	
	scanf("%d %d", &m, &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf(" %c", &arr[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 'W' && visit[i][j] == 0) {
				int w = bfs(i, j,'W');
				sum1 +=  w * w;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 'B' && visit[i][j] == 0) {
				int b = bfs(i, j,'B');
				sum2 += b * b;
			}
		}
	}

	printf("%d %d", sum1, sum2);

	return 0;
}