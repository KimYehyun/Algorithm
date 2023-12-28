#include<iostream>
#include<queue>
using namespace std;
int n, m, r, c, d, ans;
int arr[51][51];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
struct node {
	int x, y, dir;
};

void bfs() {
	queue<node>q;
	q.push({ c,r,d });	
	arr[r][c] = 2;
	ans++;
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		bool chk = 0;
		for (int i = 0; i < 4; i++) {
			int nd = (cur.dir + 3) % 4;
			int nx = cur.x + dx[nd];
			int ny = cur.y + dy[nd];
			if (nx < 0 || nx > m || ny < 0 || ny > n) continue;
			if (arr[ny][nx] == 0) {
				arr[ny][nx] = 2;
				ans++;
				chk = 1;
				q.push({ nx,ny,nd});
				break;
			}
			else {
				cur.dir = nd;
			}
		}
		if (chk == 0) {
			int nd = (cur.dir + 2) % 4;
			int nx = cur.x + dx[nd];
			int ny = cur.y + dy[nd];
			if (nx < 0 || ny < 0 || nx > m || ny > n || arr[ny][nx]==1) break;
			q.push({ nx,ny,cur.dir });
		}
	}
}

void input() {
	cin >> n >> m >> r >> c >> d;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	return;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	input();
	bfs();
	cout << ans << "\n";
	return 0;
}