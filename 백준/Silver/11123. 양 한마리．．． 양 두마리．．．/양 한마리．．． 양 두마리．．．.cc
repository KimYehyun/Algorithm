#include<iostream>
#include<string.h>
#include<queue>
using namespace std;
int n, m;
char arr[101][101];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
void bfs(int a, int b) {
	queue<pair<int ,int>>q;
	q.push({ a,b });
	arr[a][b] = '.';
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < m && arr[nx][ny]=='#') {
				q.push({ nx,ny });
				arr[nx][ny] = '.';
			}
		}
	}
	return;
}

int main(void) {
	int t;
	cin >> t;
	for (int test = 0; test < t; test++) {
		int cnt = 0;
		cin >> n >> m;
		memset(arr, '.', sizeof(arr));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == '#') {
					bfs(i,j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";

	}

	
	return 0;
}