#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n, m, k, x;
vector<int>graph[1000001];
int dist[300001];

void solve(int path, int node) {
	priority_queue<pair<int, int>>pq;
	for (int i = 1; i <= n; i++) {
		dist[i] = 2134567890;
	}
	dist[node] = 0;
	pq.push({ 0,node });
	while (!pq.empty()) {
		int cost = -1 * pq.top().first;
		int cur = pq.top().second;
		pq.pop();
		if (dist[cur] < cost)
			continue;
		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];
			int nextCost = cost + 1;

			if (nextCost < dist[next]) {
				dist[next] = nextCost;
				pq.push({ -nextCost,next });
			}

		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (dist[i] == path) {
			cout << i << "\n";
			cnt++;
		}
	}
	if (cnt == 0) {
		cout << -1 << "\n";
	}

	return;

}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m >> k >> x;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
	}
	solve(k,x);
	return 0;
}