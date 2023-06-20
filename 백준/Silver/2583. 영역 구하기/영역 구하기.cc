#define _CRT_SECURE_NO_WARNING
#include<iostream>
#include<queue>
#include<algorithm>
#include<string.h>
using namespace std;

int n, m, k;
int arr[101][101];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,-1,0,1 };
int result[10001];

int bfs(int a, int b) {
	
	queue<pair<int, int>>q;
	q.push(make_pair(a, b));
	arr[a][b] = 1;
	int cur_x, cur_y;
	int cnt=1;
	while (!q.empty()) {
        
		cur_x = q.front().first;
		cur_y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < m && arr[next_x][next_y] == 0) {
				arr[next_x][next_y] = 1;
				q.push(make_pair(next_x, next_y));
				cnt++;
			}
		}
	}
	return cnt;

}
int main() {


	int key = 0;
	memset(result, 10001, sizeof(result));
	scanf("%d %d %d", &n, &m, &k);
	int x1, x2, y1, y2;
	for (int i = 0; i < k; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int x = x1; x < x2; x++) {
			for (int y = y1; y < y2; y++) {
				arr[y][x] = 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				result[key] = bfs(i, j);
				key++;
			}
		}
	}

	sort(result, result + key);

	printf("%d\n", key);
	for (int i = 0; i < key; i++) {
		printf("%d ", result[i]);
	}

	return 0;
}