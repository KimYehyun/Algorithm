#include<iostream>
#include<algorithm>
using namespace std;
int arr[6][6];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int min_v = 2134567890;
bool visit[6][6];
void dfs(int x, int y, int cnt, int apple) {
	if (apple == 3) {
		//cout << x << " " << y << " " << cnt << " " << apple << "\n";
		min_v = min(min_v, cnt);
		return;
	}
	if (!visit[x][y]) {
		visit[x][y] = 1;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5 && arr[nx][ny] != -1 && visit[nx][ny]==0) {
				if (arr[nx][ny] == 1) dfs(nx, ny, cnt + 1, apple + 1);
				else dfs(nx, ny, cnt + 1, apple);
			}
		}
		visit[x][y] = 0;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}
	int r, c;
	cin >> r >> c;
	dfs(r, c, 0, 0);

	if (min_v == 2134567890) cout << -1;
	else cout << min_v;

	return 0;
}