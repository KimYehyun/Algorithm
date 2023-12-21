#include<iostream>
#include<vector>
#include<queue>
#define INF 2134567890
using namespace std;
vector<pair<int, int>>graph[10001];
int V, E, P;
int d[10001];

int dijkstra(int start, int end) {
	priority_queue<pair<int, int>>pq;	
	pq.push({ 0,start });
	d[start] = 0;

	while (!pq.empty()) {
		int cur_c = -pq.top().first;
		int cur_v = pq.top().second;
		pq.pop();

		for (int i = 0; i < graph[cur_v].size(); i++) {
			int next_c = cur_c + graph[cur_v][i].second;
			int next_v = graph[cur_v][i].first;
			if (d[next_v] > next_c) {
				d[next_v] = next_c;
				pq.push({ -next_c,next_v });
			}	
		}
	}

	return d[end];
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> V >> E >> P;
	for (int i = 0; i < E; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		graph[u].push_back({ v,w });
		graph[v].push_back({ u,w });
	}
	
	
	for (int i = 1; i <= V; i++) {
		d[i] = INF;		
	}
	int result1_P = dijkstra(1,P);

	for (int i = 1; i <= V; i++) {
		d[i] = INF;
	}
	int resultP_V = dijkstra(P,V);

	for (int i = 1; i <= V; i++) {
		d[i] = INF;
	}
	int result1_V = dijkstra(1, V);

	if (result1_V == result1_P + resultP_V) {
		cout << "SAVE HIM";
	}
	else {
		cout << "GOOD BYE";
	}

	return 0;
}