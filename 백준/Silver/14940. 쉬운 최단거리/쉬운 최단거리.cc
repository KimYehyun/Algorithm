#include<iostream>
#include<queue>
using namespace std;

int arr[1001][1001];
int visit[1001][1001];
queue<pair<int, int>>q;
int n, m;
int dx[4] = { 1,0,-1,0};
int dy[4] = { 0,-1,0 ,1};

void bfs() {

	while (!q.empty()) {
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < m && arr[next_x][next_y] == 1) {
				q.push(make_pair(next_x, next_y));
				visit[next_x][next_y] = visit[cur_x][cur_y]+1;
				arr[next_x][next_y] = 0;
			}
		}
		
	}

	return;
}

int main(void) {

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 2) {
				q.push(make_pair(i, j));
			}
		}
	}

	bfs();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 1) 
				printf("%d ", -1);
			else
				printf("%d ", visit[i][j]);			
		}printf("\n");
	}

	return 0;
}