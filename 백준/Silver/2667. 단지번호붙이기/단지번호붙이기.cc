#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int n;
int arr[30][30];
int c;
int ans[1000];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

void bfs(int i, int j) {
	queue<pair<int, int>>q;
	q.push(make_pair(i, j));
	arr[i][j] = 0;
	ans[c] += 1;

	while (!q.empty()) {
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if (arr[next_x][next_y] == 1 && next_x >= 0 && next_x < n && next_y >= 0 && next_y < n) {
				q.push(make_pair(next_x, next_y));
				arr[next_x][next_y] = 0;
				ans[c]++;
			}
		}
	}
	return;
}

int main(void) {

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			char a;
			scanf(" %c", &a);
			arr[i][j] = a - '0';
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1) {
				bfs(i,j);
				c++;
			}
		}
	}

	sort(ans, ans + c);
	printf("%d\n", c);
	for (int i = 0; i < c; i++)
		printf("%d\n", ans[i]);

	return 0;
}