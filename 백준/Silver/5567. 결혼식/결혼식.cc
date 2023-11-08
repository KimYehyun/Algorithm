#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n, m;
vector<int>graph[501];
bool visit[501];
int cnt;

void bfs(){
	
	queue<int>q;
	visit[1]=1;
	for (int i = 0; i < graph[1].size(); i++) {
		q.push(graph[1][i]);
		visit[graph[1][i]] = 1;
		cnt++;
	}
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];
			if (visit[next] == 0) {
				visit[next] = 1;
				cnt++;
			}
		}
	}
	
	return;
}



int main() {

	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++){
		int u, v;
		scanf("%d %d", &u, &v);
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	bfs();
	printf("%d", cnt);
	
	return 0;
}