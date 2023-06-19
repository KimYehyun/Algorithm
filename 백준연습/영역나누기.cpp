#include<iostream>
#include<queue>
using namespace std;

int arr[101][101];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,-1,0,1 };
bool visit[101][101];

int bfs(int a, int b) {
	queue<int, int>q;
	q.push(make_pair(a,b));
	visit[a][b] = 1;



}
int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	int x1, x2, y1, y2;
	for (int i = 0; i < k; i++) {
		scanf("%d %d %d %d", &x1, &y1,&x2, &y2);
		for (int x = x1; x < x2; x++) {
			for (int y = y1; y < y2; y++) {
				arr[y][x] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				int result = bfs(i,j);
			}
		}
	}
	

	return 0;
}