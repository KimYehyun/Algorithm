#include<iostream>
#include<queue>
#include <string.h>
using namespace std;
int n, m, cost, max_v;
char map[51][51];
bool visited[51][51];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
struct node {
	int a, b, c;
};
int bfs(int i, int j) {
	queue<node>q;
	q.push({ i,j, 0 });
	visited[i][j] = 1;
	while (!q.empty()) {
		int x = q.front().a;
		int y = q.front().b;
		cost = q.front().c;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && map[nx][ny] == 'L' && visited[nx][ny] == 0) {
				q.push({ nx,ny,cost+1 });
				visited[nx][ny] = 1;
			}
		}
	}
	return cost;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 'L') {
				memset(visited, 0, sizeof(visited));
				int result = bfs(i, j);
				max_v = max(max_v, result);
			}
		}
	}
	cout << max_v;
	return 0;
}