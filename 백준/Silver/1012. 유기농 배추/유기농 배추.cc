#include<iostream>
#include<string.h>
#include<queue>
using namespace std;

int arr[51][51];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,-1,0,1 };
void bfs(int x,int y,int n,int m) {
	queue<pair<int, int>>q;
	q.push(make_pair(x, y));
	arr[x][y] = 0;

	while (!q.empty()) {
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < m && arr[next_x][next_y] == 1) {
				q.push(make_pair(next_x, next_y));
				arr[next_x][next_y] = 0;
			}
		}
	}
	return;
}

int main(void) {
	
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++){

		int n, m, c;
		scanf("%d %d %d", &n, &m, &c);

		for (int i = 0; i < c; i++) {
			int a, b;
			scanf("%d %d", &a, &b);		
			arr[a][b] = 1;
		}

		int cnt = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 1) {
					bfs(i,j,n,m);
					cnt++;
				}		
			}
		}

		cout << cnt << endl;
		for (int i = 0; i < m; i++)
			memset(arr[i], 0, sizeof(int) * n);

	}
	return 0;
}