#include<iostream>
#include<queue>
using namespace std;
int A, K;
bool visit[1000001];
int bfs() {
	queue<pair<int, int>>q;
	q.push({ A,0 });
	visit[A] = 1;
	while (!q.empty()) {
		int cur = q.front().first;
		int cost = q.front().second;
		q.pop();

		if (cur == K) return cost;
		int nx = cur + 1;
		if (nx <= K && visit[nx] == 0) {
			q.push({ nx,cost + 1 });
			visit[nx] = 1;
		}
		nx = cur * 2;
		if (nx <= K && visit[nx] == 0) {
			q.push({ nx,cost + 1 });
			visit[nx] = 1;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> A >> K;
	int result = bfs();
	cout << result << "\n";
	return 0;
}