#include<iostream>
#include<queue>
#include<algorithm>
#include <string>
using namespace std;
int n, m;
char c;
int M[101][101]={-1};
bool visit[101][101];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

struct vertex {
	int a;
	int b;
};

void bfs(int s, int e) {
	queue < pair < vertex,int >> q;
	q.push(make_pair(vertex{ s, e },1));
	visit[s][e] = true;
	while (!q.empty()) {
		int cur_x = q.front().first.a;
		int cur_y = q.front().first.b;
		int cur_c = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if (next_x == n && next_y == m) {
				printf("%d", ++cur_c);
				return;
			}
			if (next_x >= 1 && next_x <= n && next_y >=1 && next_y <= m && M[next_x][next_y] == 1 && visit[next_x][next_y] == false) {
				q.push(make_pair(vertex{ next_x, next_y },++cur_c));
				if (q.size() >= 1)
					cur_c--;
				visit[next_x][next_y] = true;
			}
		}
	}

}

int main(void) {

	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf(" %c", &c);
			M[i][j] = c - '0';
		}
	}
	bfs(1, 1);

	return 0;
}