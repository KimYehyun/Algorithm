#include<iostream>
#include<queue>
using namespace std;
int arr[6][6];
int r, c;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
bool visit[5][5];
struct node {
	int x, y, c;
};
int bfs(int a, int b) {
	queue<node>q;
	q.push({ a, b,0});
	visit[a][b] = 1;
	while (!q.empty()) {
		int c_x = q.front().x;
		int c_y = q.front().y;
		int c_c = q.front().c;
		if (arr[c_x][c_y] == 1) {
			return c_c;
		}
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = c_x + dx[i];
			int ny = c_y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < 5 && ny < 5 && arr[nx][ny] != -1 && visit[nx][ny] == 0) {
				q.push({ nx,ny,c_c + 1 });
				visit[nx][ny] = 1;
			}
		}
	}
	return -1;
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}
	cin >> r >> c;
	
	int ans = bfs(r, c);
	cout << ans << "\n";
	return 0;
}