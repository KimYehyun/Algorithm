#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int n;
bool visit[101];
int ans[101][101];
vector<int>graph[101];

void dfs(int a) {
	for (int i = 0; i < graph[a].size(); i++) {
		if (!visit[graph[a][i]]) {
			visit[graph[a][i]] = 1;
			dfs(graph[a][i]);
		}
	}
}



int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			if (a == 1) {
				graph[i].push_back(j);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		memset(visit, 0, sizeof(visit));
		dfs(i);
		for (int j = 0; j < n; j++) {
			ans[i][j] = visit[j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
		

	return 0;
}