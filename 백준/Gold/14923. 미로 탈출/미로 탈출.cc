#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int n, m, b, e, s, f;
bool arr[1001][1001];
bool visit[2][1001][1001];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
struct node {
	int x, y, cost, flag;
};
int bfs() {

	queue<node>q;
	q.push({ b,e,1,0});
	visit[0][b][e] = 1;

	while (!q.empty()) {

		auto cur = q.front();
		q.pop();
		if (cur.x == s && cur.y == f) return cur.cost;

		for (int i = 0; i < 4; i++) {
			int nx = cur.x + dx[i];
			int ny = cur.y + dy[i];
			if (nx<1 || nx >n || ny <1 || ny>m) continue;
			if (cur.flag == 0) {
				if (arr[nx][ny] == 0 && visit[0][nx][ny] == 0) 
				{
					q.push({ nx,ny,cur.cost+1,0 });
					visit[0][nx][ny] = 1;
				}
				else if(arr[nx][ny] == 1 && visit[0][nx][ny] == 0) 
				{
					q.push({ nx,ny,cur.cost,1 });
					visit[0][nx][ny] = 1;
				}
			}
			else {
				if (arr[nx][ny] == 0 && visit[1][nx][ny] == 0) 
				{
					q.push({ nx,ny,cur.cost + 1,1 });
					visit[1][nx][ny] = 1;
				}
			}
		}
	}
	return -1;
}

int main (void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	memset(arr, -1, sizeof(arr));
	cin >> n >> m >> b >> e >> s >> f;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}

	int result = bfs();

	cout << result << "\n";

	return 0;
}