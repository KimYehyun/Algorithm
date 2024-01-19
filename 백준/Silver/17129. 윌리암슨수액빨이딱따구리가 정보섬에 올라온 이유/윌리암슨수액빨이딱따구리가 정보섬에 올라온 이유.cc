#include<iostream>
#include<queue>
using namespace std;
int n, m, s, e;
char arr[3001][3001];
bool visit[3001][3001];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int ans;
struct node {
	int i, j, c;
};
void bfs() {
	queue<node>q;
	q.push({ s,e,0 });
	visit[s][e] = 1;
	while (!q.empty()) {
		int x = q.front().i;
		int y = q.front().j;
		int c = q.front().c;
		q.pop();
		if (arr[x][y] != '0' && arr[x][y]!='2') {
			ans = c;
			return;
		}
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && visit[nx][ny] == 0 && arr[nx][ny] != '1' ) {
				q.push({ nx,ny,c+1 });
				visit[nx][ny] = 1;
			}
		}
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == '2') {
				s = i;
				e = j;
			}
		}
	}

	bfs();
	if (ans) {
		cout << "TAK"<<"\n"<<ans;
	}
	else {
		cout << "NIE";
	}
	return 0;
}