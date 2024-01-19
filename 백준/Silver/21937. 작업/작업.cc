#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>graph[100001];
bool visit[100001];
int cnt;
void bfs(int x) {
	queue<int>q;
	q.push(x);
	visit[x] = 1;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];
			if (!visit[next]) {
				q.push(next);
				cnt++;
				visit[next] = 1;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m, x;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		graph[v].push_back(u);
	}
	cin >> x;
	bfs(x);
	cout << cnt << "\n";
	return 0;
}