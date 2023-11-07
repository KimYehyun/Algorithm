#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n, m, k;
char arr[6][6];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
bool visit[6][6];
vector<int>v;

void dfs(int x, int y, int c) {
	if (x == 1 && y == m) {
		v.push_back(c);
		return;
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 1 && ny >= 1 && nx <= n && ny <= m && arr[nx][ny] != 'T' && visit[nx][ny] == 0) {
			visit[nx][ny] = 1;
			dfs(nx, ny, c + 1);
			visit[nx][ny] = 0;
		}
	}	
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}
	visit[n][1] = 1;
	dfs(n,1,1);

	int cnt = 0;
	for (auto a : v) {
		if (a == k) cnt++;
	}
	cout << cnt << "\n";

	return 0;
}