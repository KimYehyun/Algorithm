#include<iostream>
#include<algorithm>
#include<queue>
#include<string.h>
using namespace std;
int arr[51][51];
bool visit[51][51];
int dx[8] = { 1,-1,0,0,1,1,-1,-1 };
int dy[8] = { 0,0,1,-1,1,-1,1,-1 };
int n, m;
struct node {
	int x, y, cost;
};

int bfs(int i, int j) {
	memset(visit, 0, sizeof(visit));
	queue<node>q;
	q.push({ i, j, 0 });
	visit[i][j] = 1;
	while (!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		int c = q.front().cost;
		if (arr[x][y] == 1) return c;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < m && visit[nx][ny]==0) {
				q.push({ nx,ny,c + 1 });
				visit[nx][ny] = 1;
			}
		
		}
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
	int max_v = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				int result = bfs(i,j);
				max_v = max(max_v, result);
			}
		}
	}

	cout << max_v;

	return 0;
}