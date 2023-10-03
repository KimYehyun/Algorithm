#include<iostream>
#include<vector>
using namespace std;

int n, m;
vector<int>v[2001];
bool ans;
bool visit[2001];

void dfs(int cur,int cnt) {

	if (cnt == 4) {
		ans = 1;
		return;
	}

	visit[cur] = 1;
	for (int i = 0; i < v[cur].size(); i++) {
		int next = v[cur][i];
		if (!visit[next] && !ans) {
			dfs(next, cnt + 1);
		}
	}
	visit[cur] = 0;
}


int main(void) {

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 0; i < n; i++) {
		dfs(i, 0);
		if (ans)
			break;
	}

	cout << ans;
	return 0;
}