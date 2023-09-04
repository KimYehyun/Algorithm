#include<iostream>
#include<queue>
using namespace std;
int n, m;
char arr[1001][1001];
bool visit[2][1001][1001];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
struct Node{
	int x, y, cost, flag;
};

int bfs() {
	queue<Node>q;
	q.push({ 1,1,1,0 });
	visit[0][1][1] = 1;
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		if (cur.x == n && cur.y == m)
			return cur.cost;
		for (int i = 0; i < 4; i++) {
			int nx = cur.x + dx[i];
			int ny = cur.y + dy[i];
			if (nx<1 || ny<1 || nx>n || ny>m) continue;
			if (cur.flag == 0) {
				if (arr[nx][ny] == '1' && visit[0][nx][ny] == 0) {
					q.push({ nx,ny,cur.cost + 1,1 });
					visit[0][nx][ny] = 1;
				}
				else if (arr[nx][ny] == '0' && visit[0][nx][ny] == 0) {
					q.push({ nx,ny,cur.cost + 1,0 });
					visit[0][nx][ny] = 1;
				}
			}
			else {
				if (arr[nx][ny] == '0' && visit[1][nx][ny] == 0) {
					q.push({ nx,ny,cur.cost + 1,1 });
					visit[1][nx][ny] = 1;
				}
			}
		}
	}
	return -1;
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> arr[i][j];

	int result = bfs();
	cout << result;

	return 0;
}