#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
int n, m, s;
bool visit_q[1001];
bool visit_s[1001];
vector<int>graph[1001];

void dfs(int start) {
	visit_s[start] = true;
	printf("%d ", start);

	for (int i = 0; i < graph[start].size(); i++) {
		int next = graph[start][i];
		if (visit_s[next] == false) {
			dfs(next);
		}
	}
	return;
}

void bfs(int start) {

	queue<int> q;
	q.push(start);
	visit_q[start] = 1;
	while (!q.empty()) {
		int cur = q.front();
		cout << q.front() << " ";
		q.pop();
		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];
			if (!visit_q[next]) {
				visit_q[next] = 1;
				q.push(next);
			}
		}

	}
}

int main(void) {

	scanf("%d %d %d", &n, &m, &s);
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	
	dfs(s);
	printf("\n");
	bfs(s);
	
	return 0;
}