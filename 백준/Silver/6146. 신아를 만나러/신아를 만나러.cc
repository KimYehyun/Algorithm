#include<iostream>
#include<queue>
using namespace std;
bool arr[1001][1001];
int X, Y, N;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
struct node {
	int x, y, c;
};
void bfs() {
	queue<node>q;
	q.push({ 500,500,0 });
	arr[500][500] = 1;
	while (!q.empty()) {
		int cur_x = q.front().x;
		int cur_y = q.front().y;
		int cur_c = q.front().c;
		q.pop();
		if (cur_x == X && cur_y == Y) {
			cout << cur_c << "\n";
			return;
		}
		for (int i = 0; i < 4; i++) {
			int nx = cur_x + dx[i];
			int ny = cur_y + dy[i];
			if (nx < 0 || nx>1000 || ny < 0 || ny>1000) continue;
			if (arr[nx][ny]==1) continue;
			q.push({ nx,ny,cur_c + 1 });
			arr[nx][ny] = 1;
			
		}
	}
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> X >> Y >> N;
	X += 500; Y += 500;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		arr[a + 500][b + 500] = 1;
	}
	bfs();
	return 0;
}