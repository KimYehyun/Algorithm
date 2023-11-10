#include<iostream>
#include<queue>
#include<cstring>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int n, m, v;
bool visit[1001];
vector<int>graph[1001];

void bfs(int start) {
	memset(visit, 0, sizeof(visit));
	queue<int>q;
	q.push(start);
	visit[start] = 1;
	while (!q.empty()) {
		int cur = q.front();
		cout << cur << " ";
		q.pop();
		for (int i = 0; i < graph[cur].size(); i++) {
			int nx = graph[cur][i];
			if (visit[nx] == 0) {
				visit[nx] = 1;
				q.push(nx);
			}
		}
	}
	return;
}

void dfs(int start) {
	
	cout << start << " ";
	visit[start] = 1;
	for (int i = 0; i < graph[start].size(); i++) {
		int nx = graph[start][i];
		if (!visit[nx]) {
			dfs(nx);
		}
	}
	return;
}

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	dfs(v);
	cout << "\n";
	bfs(v);
	return 0;
}