#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n, m;
bool visit[101];
vector<int>graph[101];

void bfs(int start) {

	queue<int>q;
	q.push(start);
	visit[start] = true;
	int count = 0;
	while (!q.empty()) {

		int cur = q.front();
		q.pop();
		count++;
		for (int i = 0; i < graph[cur].size(); i++) {
			int a = graph[cur][i];
			if (!visit[a]) {
				q.push(a);
				visit[a] = true;
			}
		}
	}
	printf("%d", count-1);
	return;
}

int main(void) {

	
	scanf("%d\n%d", &n, &m);
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	bfs(1);

	return 0;
}