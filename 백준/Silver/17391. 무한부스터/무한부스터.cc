#include<iostream>
#include<queue>
using namespace std;
int n, m;
int arr[301][301];
int dx[2] = { 0,1 };
int dy[2] = { 1,0 };
struct node {
	int i, j, c, ans;
};
int bfs() {
	queue<node>q;
	q.push({ 0,0,arr[0][0],0});
	arr[0][0] = 0;

	while (!q.empty()) {
		int x = q.front().i;
		int y = q.front().j;
		int c = q.front().c;
		int a = q.front().ans;
		q.pop();
		if (x == n - 1 && y == m - 1) return a;
		for (int i = 0; i < 2; i++) {
			for (int j = 1; j <= c; j++) {
				int nx = x + (dx[i] * j);
				int ny = y + (dy[i] * j);
				if (nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny] != 0) {
					q.push({ nx, ny, arr[nx][ny],a+1});
					arr[nx][ny] = 0;
				}
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

	int result = bfs();
	cout << result << "\n";
	return 0;
}