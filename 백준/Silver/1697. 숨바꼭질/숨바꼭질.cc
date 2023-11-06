#include<iostream>
#include<queue>
using namespace std;
int N, K;
bool visit[100001];
int bfs() {
	queue<pair<int,int>>q;
	q.push({ N,0 });
	visit[N] = 1;
	while (!q.empty()) {
		int x = q.front().first;
		int c = q.front().second;
		q.pop();
		if (x == K) return c;
		for (int i = 0; i < 3; i++) {
			int nx;
			if (i == 0) nx = x - 1;
			else if (i == 1) nx = x + 1;
			else nx = 2 * x;
			
			if (nx >= 0 && nx <= 100000 && visit[nx] == 0) {
				q.push({ nx,c + 1 });
				visit[nx] = 1;
			}

		}
	}

	
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> N >> K;
	int result =bfs();
	cout << result;
	return 0;
}