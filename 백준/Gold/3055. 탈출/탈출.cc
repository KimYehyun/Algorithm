#include<iostream>
#include<queue>
using namespace std;
int n, m, endx,endy;
char arr[51][51];
bool w_visit[51][51];
bool visit[51][51];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
queue <pair<int, int >> w;
queue <pair<int, int >> q;

void w_bfs() {
	int s = w.size();
	while (s--) {
		int x = w.front().first;
		int y = w.front().second;
		w.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < m && arr[nx][ny] != 'X' && arr[nx][ny] != 'D' && w_visit[nx][ny] == 0) {
				arr[nx][ny] = '*';
				w_visit[nx][ny] = 1;
				w.push({ nx,ny });
			}
		}
	}
}


void bfs() {
	int s = q.size();
	while (s--) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < m && (arr[nx][ny] == '.' || arr[nx][ny] == 'D') && visit[nx][ny] == 0) {
				visit[nx][ny] = 1;
				q.push({ nx,ny });
			}
		}
	}
}




int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(); cout.tie(0);
	
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'S') {
				q.push({ i,j });
				visit[i][j] = 1;
			}
			else if (arr[i][j] == '*') {
				w.push({ i,j });
				w_visit[i][j] = 1;
			}
			else if(arr[i][j]=='D'){
				endx = i;
				endy = j;
			}
		}
	}

	int result = 0;
	while (1) {
		if (visit[endx][endy] == 1) {
			cout << result << "\n";
			break;
		}
		if (q.empty()) {
			cout << "KAKTUS" << "\n";
			break;
		}
		w_bfs();
		bfs();
		result++;
	}
	
	return 0;
}