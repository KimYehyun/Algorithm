#include<iostream>
#include<vector>
using namespace std;
int n, s, e, m;
vector<int>graph[101];
bool visit[101];
int ans = -1;
void dfs(int i, int c) {
	visit[i] = 1;
	if (i == e) {
		ans = c;
		return;
	}
	
	for (int k = 0; k < graph[i].size(); k++) {
		int ni = graph[i][k];
		if(!visit[ni])
			dfs(ni, c+1);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> s >> e >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	dfs(s,0);

	cout << ans << "\n";

	return 0;
}