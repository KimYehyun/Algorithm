#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n, m, q;
vector<int>graph[1001];
int dist[1001];

void bfs() {
	for (int i = 1; i <= n; i++) dist[i] = 2134567890;
	
	priority_queue<pair<int, int>>pq;
	pq.push({ 0,1 });
	dist[1] = 0;

	while (!pq.empty()) {
		int cur = pq.top().second;
		int cost = -pq.top().first;
		pq.pop();
		if (dist[cur] < cost) continue;
		for (int i = 0; i < graph[cur].size(); i++) {
			int n_cur = graph[cur][i];
			if (dist[n_cur] > dist[cur] + 1) {
				dist[n_cur] = dist[cur] + 1;
				pq.push({ -(cost + 1),n_cur });
			}
		}

	}
}

void output() {
	for (int i = 1; i <= n; i++) {
		if (dist[i] == 2134567890)cout << -1 << " ";
		else cout << dist[i] << " ";
	}
	cout << "\n";
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
	cin >> q;
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
		bfs();
		output();
	}
	return 0;
}