#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int n, m;
int visit[500001];
vector<int>graph[50001];
int max_v;
void bfs() {
	queue<int>q;
	q.push(1);
	visit[1] = 1;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < graph[x].size(); i++) {
			int nx = graph[x][i];
			if (visit[nx] == 0) {
				q.push(nx);
				visit[nx] = visit[x]+1;
				max_v = max(max_v, visit[nx]);
			}
		}
	}
	int ans = 0,cnt = 0; bool a = 0;
	for (int i = 1; i <= n; i++) {
		if (a == 0 && max_v == visit[i]) {
			ans = i;
			a = 1;
		}
		if (max_v == visit[i]) cnt++;
	}
	cout << ans << " " << max_v-1 << " " << cnt << "\n";
	return;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	bfs();
	return 0;
}