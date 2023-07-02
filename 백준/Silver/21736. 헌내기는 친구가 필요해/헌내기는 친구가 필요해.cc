#include<iostream>
#include<queue>
using namespace std;
bool visit[601][601];
char arr[601][601];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int cnt;
void bfs(int x, int y, int n, int m) {
	queue<pair<int, int>>q;
	q.push(make_pair(x, y));
	visit[x][y] = 1;

	while (!q.empty()) {
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < m && arr[next_x][next_y] != 'X' && visit[next_x][next_y] == 0) {
				q.push(make_pair(next_x, next_y));
				visit[next_x][next_y] = 1;
				if(arr[next_x][next_y] == 'P')
					cnt++;
			}
		}
	}
	if (cnt!=0)
		printf("%d\n", cnt);
	else
		printf("TT\n");
	return;
}

int main(void) {

	int n, m;
	scanf("%d %d", &n, &m); 
	
	int x, y;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			scanf(" %c", &arr[i][j]);
			if (arr[i][j] == 'I') {
				x = i;
				y = j;
			}
		}		
	bfs(x,y,n,m);

	return 0;
}