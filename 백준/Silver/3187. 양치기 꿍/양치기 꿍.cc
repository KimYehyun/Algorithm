#include<iostream>
#include<queue>
using namespace std;
int n, m, v, k;
char arr[251][251];
bool visit[251][251];

int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };

void bfs(int i, int j) {

	int total_k = 0;
	int total_v = 0;

	queue<pair<int, int>>q;
	q.push({ i,j });
	visit[i][j] = 1;
	while (!q.empty()) {
		int cur_x = q.front().first;
		int cur_y = q.front().second;

		if (arr[cur_x][cur_y] == 'k')
			total_k++;
		else if (arr[cur_x][cur_y] == 'v')
			total_v++;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = cur_x + dx[i];
			int ny = cur_y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (visit[nx][ny] == 1 || arr[nx][ny] == '#') continue;
			visit[nx][ny] = 1;
			q.push({ nx,ny });
		}
	}

	if (total_v >= total_k) {
		k -= total_k;
	}
	else {
		v -= total_v;
	}

}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'v') v++;
			else if (arr[i][j] == 'k')k++;
		}
	}
	
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {				
            if (arr[i][j] != '#') {
				bfs(i, j);
			}
		}
    }
	
	
	cout << k << " " << v;

	return 0;
}