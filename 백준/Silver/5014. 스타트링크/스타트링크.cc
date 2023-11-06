#include<iostream>
#include<queue>
using namespace std;
int f, s, g, u, d;
bool visit[1000001];

int bfs(int s, int g) {
	queue<pair<int,int>>q;
	q.push({ s,0 });
	visit[s] = 1;
	while (!q.empty()) {
		int x = q.front().first;
		int c = q.front().second;
		if (x == g) return c;
		q.pop();
		int nx;
		for (int i = 0; i < 2; i++) {
			if (i == 0) nx = x + u;
			else  nx = x - d;
			if (nx >= 1 && nx <= f && visit[nx]==0) {
				q.push({ nx,c + 1 });
				visit[nx] = 1;
			}
		}
		
	}
	return -1;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> f >> s >> g >> u >> d;

	int result = bfs(s, g);

	if (result == -1) cout << "use the stairs" << "\n";
	else cout << result << "\n";

	return 0;
}