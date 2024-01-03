#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define INF 2134567890
using namespace std;

struct node {
	int a, b, c;
};
int n, m;
vector<int>graph[101];
int arr[101];
bool visited[101];
int dist[101];
vector<node>v;

bool cmp(node& a, node& b) {
	if (a.c == b.c) {
		if (a.a == b.a) {
			return a.b < b.b;
		}
		return a.a < b.a;
	}		
	return a.c < b.c;
}

void clear() {
	for (int i = 0; i <= n; i++) {
		dist[i] = INF;
	}
}

void dijkstra() {
	priority_queue<pair<int, int>>q;
	q.push({0,arr[0]});
	q.push({0,arr[1]});
	dist[arr[0]] = 0;
	dist[arr[1]] = 0;

	while (!q.empty()) {
		int cost = -q.top().first;
		int cur = q.top().second;
		q.pop();
		if (dist[cur] < cost) continue;
		for (int i = 0; i < graph[cur].size(); i++) {
			int n_cur = graph[cur][i];
			int n_cost = cost + 1;
			if (dist[n_cur] > n_cost) {
				dist[n_cur] = n_cost;
				q.push({ -n_cost,n_cur });
			}
		}
	}
	return;
}
void cal() {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += (dist[i]*2);
	}
	v.push_back({ arr[0],arr[1],sum });
}
void dfs(int num, int cnt) {
	if (cnt == 2) {
		clear();
		dijkstra();
		cal();
		return;
	}
	for (int i = num; i <= n; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			arr[cnt] = i;
			dfs(i + 1, cnt + 1);
			visited[i] = false;
		}
	}
}


void input() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	input();
	dfs(1,0);
	sort(v.begin(), v.end(), cmp);
	cout << v[0].a << " " << v[0].b << " " << v[0].c;
	return 0;
}
