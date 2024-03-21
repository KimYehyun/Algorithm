#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int n, m, start;
int dist[20001];
vector<pair<int,int>>graph[20001];

void dijkstra() {
	priority_queue<pair<int, int>>pq;
	pq.push({ 0,start });
	dist[start] = 0;
	while (!pq.empty()) {
		int cost = -pq.top().first;
		int cur = pq.top().second;
		pq.pop();
		if (dist[cur] < cost) continue;
		for (int i = 0; i < graph[cur].size(); i++) {
			int ncur = graph[cur][i].first;
			int ncost = graph[cur][i].second + cost;
			if (dist[ncur] > ncost) {
				pq.push({ -ncost,ncur });
				dist[ncur] = ncost;
			}
		}
	}
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m >> start;
	for (int i = 0; i < m; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		graph[u].push_back({v,w});
	}
	for (int i = 1; i <= n; i++) {
		dist[i] = 2134567890;
	}
	dijkstra();
	for (int i = 1; i <= n; i++) {
		if (dist[i] == 2134567890) cout << "INF" << "\n";
		else cout << dist[i] << "\n";
	}
	return 0;
}