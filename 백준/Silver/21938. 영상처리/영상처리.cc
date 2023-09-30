#include<iostream>
#include<queue>
using namespace std;

int n, m, t;
int  arr[1001][1001];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
void bfs(int i, int j) {
	queue<pair<int, int>>q;
	q.push({ i,j });
	arr[i][j] = 0;
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny <= m && arr[nx][ny] == 255){
				q.push({ nx,ny });
				arr[nx][ny] = 0;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n ; i++) {
		for (int j = 0; j < m; j++) {
			int a, b, c;
			cin >> a >> b >> c;
			arr[i][j] = (a + b + c) / 3;
		}
	}
	
	cin >> t;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] >= t) arr[i][j] = 255;
			else arr[i][j] = 0;
		}
	}
	
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 255) {
				bfs(i,j);
				cnt++;
			}
		}
	}
	cout << cnt<<"\n";
	return 0;
}