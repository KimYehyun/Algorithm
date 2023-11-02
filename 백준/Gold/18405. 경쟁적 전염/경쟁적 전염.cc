#include<iostream>
#include<queue>
using namespace std;
int n, k, s, a, b;
int arr[201][201];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

struct node {
	int x, y, cost;
};

queue<node>q;
void bfs() {
	while (!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		int c = q.front().cost;
		if (c == s) return;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < n && arr[nx][ny] == 0)
			{
				q.push({ nx,ny, c+1 });
				arr[nx][ny] = arr[x][y];
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> k;
	
	vector<vector<pair<int, int>> > v(k + 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0)continue;
			v[arr[i][j]].push_back({ i,j });
		}
	}


	for (int i = 1; i <= k;i++) {
		for (int j = 0; j < v[i].size(); j++) {
			q.push({ v[i][j].first,v[i][j].second ,0});
		}	
	}
	cin >> s >> a >> b;
	bfs();
	cout << arr[a - 1][b - 1]<<"\n";

	return 0;
}