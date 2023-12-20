#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int n, m, k,key;
struct node {
	int from, cost;
};
vector<node>graph[101];
vector<int>v;
bool visit[101];
int arr[101][101];

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}
void clear() {
	for (int i = 0; i < 101; i++) {
		visit[i] = 0;
		for (int j = 0; j < 101; j++) {
			arr[i][j] = 987654321;
		}
	}
	v.clear();
	for (int i = 0; i < 101; i++) {
		graph[i].clear();
	}
}


void dijkstra(int start, int end)
{
	priority_queue<pair<int, int>> pq;
	pq.push(make_pair(0, start));
	arr[key][start] = 0;

	while (!pq.empty())
	{
		int cost = -pq.top().first;
		int cur = pq.top().second;
		pq.pop();

		if (arr[key][cur] < cost) continue;

		for (int i = 0; i < graph[cur].size(); i++)
		{
			int next = graph[cur][i].from;
			int nCost = graph[cur][i].cost;

			if (arr[key][next] > cost + nCost)
			{
				arr[key][next] = cost + nCost;
				pq.push(make_pair(-arr[key][next], next));
			}
		}
	}

}

void solve() {
	for (int i = 0; i < v.size(); i++) {
		for (int j = 1; j <= n; j++) {
			key = v[i];
			dijkstra(v[i],j);
		}
	}
	vector<pair<int,int>>v1;
	for (int i = 1; i <= n; i++) {
		int value = 0;
		for (int j = 0; j < v.size(); j++) {
			value += arr[v[j]][i];
		}
		v1.push_back({value,i});
	}
	sort(v1.begin(), v1.end(),cmp);
	cout << v1[0].second<< "\n";
}

void input() {
	cin >> n >> m;
	clear();
	for (int i = 0; i < m; i++) {
		int a, b,c;
		cin >> a >> b>>c;
		graph[a].push_back({ b,c });
		graph[b].push_back({ a,c });
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		input();
		solve();
	}
	
	return 0;
}