#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define INF 1e14
using namespace std; 
struct node {
	long long x, c;
};
int n, m, k;
vector<node>graph[100001];
vector<pair<long long,long long>>ans;
long long dist[100001];
priority_queue<pair<long long, long long>>pq;

bool cmp(pair<long long, long long>& a, pair<long long, long long>& b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first > b.first;
}

void dijkstra() {
	while (!pq.empty()) {
		long long cur_x = pq.top().second;
		long long cur_c = -pq.top().first;
		pq.pop();
		if (dist[cur_x] < cur_c) continue;
		for (int i = 0; i < graph[cur_x].size(); i++) {
			long long next_x = graph[cur_x][i].x;
			long long next_c = cur_c + graph[cur_x][i].c;
			if (dist[next_x] > next_c) {
				dist[next_x] = next_c;
				pq.push({ -next_c, next_x });
			}
		}
	}
	return;
}
void input() {
	cin >> n >> m >> k;
	for (long long i = 0; i < m; i++) {
		long long u, v, w;
		cin >> u >> v >> w;
		graph[v].push_back({ u,w });
	}

	for (long long i = 1; i <= n; i++) {
		dist[i] = INF;
	}

	for (long long i = 0; i < k; i++) {
		long long a;
		cin >> a;
		pq.push({ 0,a });
		dist[a] = 0;
	}
	return;
}
void output() {
	for (long long i = 1; i <= n; i++) {
		ans.push_back({ dist[i],i });
	}
	sort(ans.begin(), ans.end(), cmp);
	cout << ans[0].second << "\n" << ans[0].first << "\n";
	return;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	input();
	dijkstra();
	output();
	return 0;
}